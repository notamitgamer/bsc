import os
import re
from collections import Counter
from typing import Dict, List, Set, Tuple, Callable

# Standard keywords for C, Python, and R, along with common preprocessor directives
C_KEYWORDS: Set[str] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while",
    "include", "define", "ifdef", "ifndef", "endif", "pragma", "undef"
}

PYTHON_KEYWORDS: Set[str] = {
    "False", "None", "True", "and", "as", "assert", "async", "await",
    "break", "class", "continue", "def", "del", "elif", "else", "except",
    "finally", "for", "from", "global", "if", "import", "in", "is",
    "lambda", "nonlocal", "not", "or", "pass", "raise", "return", "try",
    "while", "with", "yield"
}

R_KEYWORDS: Set[str] = {
    "if", "else", "repeat", "while", "function", "for", "in", "next", "break",
    "TRUE", "FALSE", "NULL", "Inf", "NaN", "NA", "NA_integer_", "NA_real_",
    "NA_complex_", "NA_character_"
}

def strip_c_comments_and_strings(code: str) -> str:
    """
    Strips single-line and multi-line comments, character constants,
    and string literals from C/C++ source code. Replaces them with spaces
    to avoid joining separated tokens.
    """
    # Matches double quoted strings, single quoted chars, block comments, or line comments
    pattern = re.compile(
        r'("(?:\\[\s\S]|[^"\\])*")|(\'(?:\\[\s\S]|[^\'\\])*\')|(/\*[\s\S]*?\*/)|(//[^\r\n]*)'
    )
    return pattern.sub(' ', code)

def strip_python_comments_and_strings(code: str) -> str:
    """
    Strips single-line comments (#), multi-line triple-quoted strings,
    and standard single/double-quoted string literals from Python source code.
    """
    # Matches triple-quotes first, standard strings, and then line comments
    pattern = re.compile(
        r'(""")[\s\S]*?(\1)|(\'\'\')[\s\S]*?(\3)|("(?:\\[\s\S]|[^"\\])*")|(\'(?:\\[\s\S]|[^\'\\])*\')|(#[^\r\n]*)'
    )
    return pattern.sub(' ', code)

def strip_r_comments_and_strings(code: str) -> str:
    """
    Strips single-line comments (#) and string literals from R source code.
    """
    # Matches strings and line comments
    pattern = re.compile(
        r'("(?:\\[\s\S]|[^"\\])*")|(\'(?:\\[\s\S]|[^\'\\])*\')|(#[^\r\n]*)'
    )
    return pattern.sub(' ', code)

# Mapping of file extensions to language name, its keyword set, and its designated stripper
LANGUAGE_MAP: Dict[str, Tuple[str, Set[str], Callable[[str], str]]] = {
    ".c": ("C", C_KEYWORDS, strip_c_comments_and_strings),
    ".h": ("C", C_KEYWORDS, strip_c_comments_and_strings),
    ".py": ("Python", PYTHON_KEYWORDS, strip_python_comments_and_strings),
    ".r": ("R", R_KEYWORDS, strip_r_comments_and_strings),
    ".R": ("R", R_KEYWORDS, strip_r_comments_and_strings)
}

def analyze_keywords_in_file(filepath: str, keywords: Set[str], stripper: Callable[[str], str]) -> Tuple[Counter, int, int]:
    """
    Reads a file, calculates original lines, strips out literal strings and comments,
    tokenizes the cleaned code, and yields counts for actual language keywords.
    """
    keyword_counts = Counter()
    total_lines = 0
    
    # Read file using standard encoding configurations
    with open(filepath, 'r', encoding='utf-8', errors='replace') as file:
        raw_code = file.read()
        
    total_lines = raw_code.count('\n') + (1 if raw_code else 0)
    
    # Strip comments and string literals using the designated preprocessor
    cleaned_code = stripper(raw_code)
    
    # Tokenize the remaining valid code words
    words = re.findall(r'#?\b\w+\b', cleaned_code)
    
    # Keep track of words that are genuine keywords
    for word in words:
        clean_word = word.lstrip('#')
        if clean_word in keywords:
            keyword_counts[clean_word] += 1
            
    return keyword_counts, total_lines, len(cleaned_code.strip())


def process_file_list(list_filepath: str, output_filepath: str) -> None:
    """
    Reads the index file containing code file paths, aggregates keyword usage
    globally separated by language, and writes a persistent report.
    """
    report_lines: List[str] = []

    def log(message: str = "") -> None:
        """Helper to print to standard output and queue for report generation."""
        print(message)
        report_lines.append(message)

    log("=" * 80)
    log("Starting Precise Global Keyword Analysis (Excludes Strings & Comments)")
    log("=" * 80)

    if not os.path.exists(list_filepath):
        log(f"Error: The listing index file could not be found at:\n{list_filepath}")
        return

    try:
        with open(list_filepath, 'r', encoding='utf-8', errors='replace') as list_file:
            filepaths = [line.strip() for line in list_file if line.strip()]
    except Exception as e:
        log(f"Failed to read file list index: {e}")
        return

    if not filepaths:
        log("No files found listed inside your index file.")
        return

    # Dictionaries to aggregate keyword counts and file counts per language
    aggregated_counts: Dict[str, Counter] = {
        "C": Counter(),
        "R": Counter(),
        "Python": Counter(),
        "Unknown": Counter()
    }
    
    file_counts: Dict[str, int] = {
        "C": 0,
        "R": 0,
        "Python": 0,
        "Unknown": 0
    }

    total_files_processed = 0
    
    for path in filepaths:
        if not os.path.exists(path):
            print(f"Warning: File does not exist: {path}")
            continue
            
        # Detect language configurations
        _, ext = os.path.splitext(path)
        lang_config = LANGUAGE_MAP.get(ext)
        
        if not lang_config:
            language_name = "Unknown"
            keywords_to_use = C_KEYWORDS.union(PYTHON_KEYWORDS)
            stripper_to_use = strip_python_comments_and_strings
        else:
            language_name, keywords_to_use, stripper_to_use = lang_config

        try:
            # Analyze keywords safely with comments/strings pre-stripped
            keyword_counts, lines, cleaned_size = analyze_keywords_in_file(path, keywords_to_use, stripper_to_use)
            aggregated_counts[language_name].update(keyword_counts)
            file_counts[language_name] += 1
            total_files_processed += 1
        except Exception as e:
            print(f"Warning: Could not analyze {path} due to: {e}")
            
    log(f"\nSuccessfully analyzed {total_files_processed}/{len(filepaths)} files across the codebase.")
    log("-" * 80)

    # Display aggregated results grouped by language
    for language in ["C", "R", "Python", "Unknown"]:
        count_data = aggregated_counts[language]
        files_analyzed = file_counts[language]
        
        # Show section only if files of this language type were processed
        if files_analyzed > 0 or len(count_data) > 0:
            log(f"\n>>> GLOBAL KEYWORD SUMMARY FOR {language.upper()} ({files_analyzed} file(s) processed) <<<")
            if not count_data:
                log("    No keywords found in active execution blocks.")
            else:
                log(f"    {'Keyword':<15} | {'Total Occurrences':<18}")
                log("    " + "-" * 38)
                # Sort descending by count, then ascending alphabetically
                sorted_keywords = sorted(count_data.items(), key=lambda x: (-x[1], x[0]))
                for kw, count in sorted_keywords:
                    log(f"    {kw:<15} : {count} time(s)")
                    
    log("\n" + "=" * 80)
    log("Global Aggregation Analysis Complete!")
    log("=" * 80)

    # Write the logged outputs into the report file
    try:
        with open(output_filepath, 'w', encoding='utf-8') as report_file:
            report_file.write("\n".join(report_lines) + "\n")
        print(f"\n[Success]: Aggregated results saved to file: '{output_filepath}'")
    except Exception as e:
        print(f"\n[Error]: Could not write report file to '{output_filepath}': {e}")


if __name__ == "__main__":
    # Target location containing the file lists
    INDEX_FILE = r"G:\bsc\c_files_list.txt"
    
    # Destination path for the resulting report file
    OUTPUT_FILE = r"keyword_analysis_report.txt"
    
    # Run the utility process
    process_file_list(INDEX_FILE, OUTPUT_FILE)