---
icon: lucide/file-badge
---

# Model Questions: Computer Fundamentals and Programming with C
### Paper Code: CMSACOR01T

---

::: info How to use this file
Questions are grouped **unit-wise** matching the WBSU NEP syllabus.
If you can answer each descriptive question fully, all short/MCQ variants on that topic are automatically covered.
Attempt at least **2 questions from each unit** before your exam.
:::
---

## Unit 1 — Overview of C

**Q1.** Trace the history of the C programming language from its origin at Bell Labs to its standardization as ANSI C. Explain why C is considered a middle-level language and what advantages it offers over assembly language and over high-level languages like Python.

**Q2.** Describe the basic structure of a C program with a complete annotated example. Explain the role of each section: documentation, preprocessor directives, global declarations, `main()`, and user-defined functions. What happens if `main()` is absent?

**Q3.** What is an algorithm? List and explain the five essential properties of an algorithm. Write an algorithm (in pseudocode or flowchart) to find the largest of three numbers, and then translate it into a working C program.

**Q4.** Explain structured programming constructs in detail. What are the three fundamental control structures according to the Böhm–Jacopini theorem? How does C implement each of them? Why did structured programming replace "goto-heavy" coding?

**Q5.** List all the character sets used in C. Classify them into letters, digits, special characters, and whitespace characters. Give examples of how special characters serve dual purposes in C (e.g., `*` as both multiplication operator and pointer declarator).

**Q6.** Define the term *token* in C. Identify and explain all six categories of tokens: keywords, identifiers, constants, string literals, operators, and punctuators. Give two examples from each category.

**Q7.** List all 32 keywords of ANSI C. For any 10 of them, write a short code snippet demonstrating their purpose. Why are keywords case-sensitive in C?

**Q8.** Differentiate between integer constants, floating-point constants, character constants, and string constants in C. What is an escape sequence? List at least eight escape sequences with their meanings and an example use of each.

**Q9.** What is a variable? Explain the rules for naming variables in C. Differentiate between variable **declaration** and variable **definition** with examples. What is the significance of the `extern` keyword in this context?

**Q10.** Describe all primitive data types in C (`int`, `float`, `double`, `char`, `void`). For each, state the typical size (in bytes on a 32-bit system), range, and a usage example. What is the role of type modifiers (`signed`, `unsigned`, `short`, `long`)?

**Q11.** Explain the four storage classes in C — `auto`, `register`, `static`, and `extern` — with respect to: (a) storage location, (b) default initial value, (c) scope, (d) lifetime. Write a single program that demonstrates at least three of these.

**Q12.** What is meant by *scope* and *lifetime* of a variable? Differentiate between local scope, global scope, and block scope with examples. What problem can arise when a local variable has the same name as a global variable, and how does C resolve this?

---

## Unit 2 — Operators, Expressions and Preprocessor

**Q13.** Explain all arithmetic operators in C with examples. What is integer division in C? Write a program that accepts two integers and demonstrates all arithmetic operations including integer division truncation and the modulo operator.

**Q14.** List and explain all relational and logical operators in C. What values do they return? Write a program that reads a year and determines whether it is a leap year using relational and logical operators.

**Q15.** Explain the assignment operator and all compound assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, `>>=`) with examples. What is the difference between `=` (assignment) and `==` (equality)?

**Q16.** Explain pre-increment (`++i`) and post-increment (`i++`) operators, and their decrement counterparts, with detailed examples. Write a program showing how `a = i++` and `a = ++i` produce different results.

**Q17.** Explain the conditional (ternary) operator `? :` in C with syntax and at least three practical examples. When would you prefer the ternary operator over an `if-else` block?

**Q18.** Describe all six bitwise operators in C (`&`, `|`, `^`, `~`, `<<`, `>>`). Write a program that: (a) checks whether a number is even or odd using bitwise AND, (b) swaps two numbers without a temporary variable using XOR, and (c) multiplies a number by 8 using left shift.

**Q19.** What are special operators in C? Explain the `sizeof` operator, the comma operator, the address-of operator `&`, and the dereference operator `*` with examples. What does `sizeof(int)` return on a 64-bit system and why?

**Q20.** Explain operator precedence and associativity in C. Draw a precedence table covering at least 10 levels. Trace the evaluation of the following expression step-by-step: `x = 3 + 4 * 2 - 6 / 2 + (8 % 3)`.

**Q21.** What is *type casting* in C? Distinguish between implicit (automatic) type conversion and explicit type casting with examples. What is *integer promotion*? Write a program showing a case where implicit conversion leads to data loss.

**Q22.** Explain the role of the C preprocessor. Describe the following directives with syntax and examples: `#include`, `#define`, `#undef`, `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, `#endif`, and `#error`. What is the difference between `#include <file>` and `#include "file"`?

**Q23.** What is a macro in C? Explain function-like macros vs. object-like macros. Write macros for: (a) finding the maximum of two numbers, (b) squaring a number, (c) converting Fahrenheit to Celsius. What is a *macro side effect* — illustrate with `#define SQUARE(x) x*x` when called as `SQUARE(a+1)`.

**Q24.** Describe all standard input/output functions available in C: `printf()`, `scanf()`, `getchar()`, `putchar()`, `gets()`, `puts()`. Explain all format specifiers (`%d`, `%f`, `%c`, `%s`, `%e`, `%o`, `%x`, `%p`, `%ld`, `%lf`). Write a program that reads and prints data of multiple types.

---

## Unit 3 — Decision and Loop Control Structures

**Q25.** Explain the `if`, `if-else`, and nested `if-else` statements with syntax, flowcharts, and examples. Write a program that reads three numbers and prints them in descending order using nested `if-else`.

**Q26.** Explain the `switch` statement in detail — its syntax, how it works, the role of `break`, the `default` case, and fall-through behaviour. Write a program that implements a simple calculator (+, -, *, /) using `switch`. What are the limitations of `switch` compared to `if-else`?

**Q27.** What is the conditional operator `? :` as a decision construct? Compare and contrast `switch` and `if-else-if` ladder: when is each preferred? Write the same grade-classification program using both constructs.

**Q28.** Describe the `while` loop in C with syntax and flowchart. Write a program using `while` to: (a) print all perfect numbers between 1 and 500, (b) find the GCD of two numbers using the Euclidean algorithm.

**Q29.** Describe the `do-while` loop and explain the fundamental difference between `while` and `do-while`. Give a scenario where `do-while` is the correct choice. Write a menu-driven program that keeps repeating until the user chooses to quit, using `do-while`.

**Q30.** Explain the `for` loop with syntax, flowchart, and examples. Write programs to: (a) print the multiplication table of a number, (b) compute n! (factorial), (c) print Pascal's triangle up to n rows. Show how to write an infinite loop using `for`.

**Q31.** Explain the `break` and `continue` statements in C with examples. How do they differ in their effect inside a loop? Write a program that prints all prime numbers from 2 to 100 using `break` and `continue` appropriately.

**Q32.** Explain the `goto` statement in C with syntax and an example. Why is `goto` generally discouraged in structured programming? Are there any cases where `goto` is considered acceptable? Give an example of forward jump and backward jump using `goto`.

**Q33.** Write a program in C that prints the following patterns. Explain the loop logic used for each:
```
(a)    *           (b)  *****       (c)   1
      ***               ****            1 2
     *****              ***            1 2 3
    *******             **            1 2 3 4
   *********            *            1 2 3 4 5
```

**Q34.** Write a C program to check whether a number is Armstrong (narcissistic), and use it to print all Armstrong numbers between 1 and 9999. Explain the algorithm. Also write programs to check Palindrome and Perfect numbers.

---

## Unit 4 — Functions and Arrays

**Q35.** Explain the concept of functions in C. What are the advantages of modular programming using functions? Distinguish between the following: (a) function declaration (prototype), (b) function definition, (c) function call. Write a program that uses a function to check whether a number is prime.

**Q36.** Explain *call by value* and *call by reference* in C with examples. Which mechanism does C use by default? How can call-by-reference behaviour be simulated in C? Write a program to swap two integers both ways and show the difference in output.

**Q37.** Explain *functions returning values* and *void functions* (functions returning nothing). What is the `return` statement? Can a function return multiple values directly? If not, how can you achieve returning multiple values? Write an appropriate example.

**Q38.** What are *inline functions* in C? Why are they used, and what is the benefit over macros? What are the limitations of inline functions? (Note: Inline is a C99/C++ feature; explain how it relates to macros in ANSI C context.)

**Q39.** What are *function parameters*? Explain formal parameters vs. actual parameters. What happens if too few or too many arguments are passed? Describe *functions with variable number of arguments* using `<stdarg.h>` (`va_list`, `va_start`, `va_arg`, `va_end`) with an example that sums n integers.

**Q40.** Explain *command line arguments* in C. What is the signature `int main(int argc, char *argv[])`? Write a program that accepts a filename from the command line and prints its contents. What happens if no arguments are provided?

**Q41.** What is recursion? Explain how the call stack works during recursion with a diagram. Write recursive C programs to compute: (a) factorial, (b) Fibonacci numbers, (c) GCD (Euclidean method), (d) Tower of Hanoi. Discuss the advantages and disadvantages of recursion vs. iteration.

**Q42.** Declare and define a one-dimensional array in C. Explain the relationship between an array name and a pointer. Write a program that: (a) finds the maximum and minimum element, (b) reverses the array in place, (c) performs linear search, (d) performs binary search — all using the same array.

**Q43.** Explain two-dimensional arrays in C. How is a 2D array stored in memory (row-major order)? Write a C program to: (a) multiply two matrices, (b) find the transpose of a matrix, (c) check whether a matrix is symmetric. Also explain multi-dimensional arrays.

**Q44.** Explain string handling in C. How are character arrays used to store strings? What is the null character `'\0'` and why is it important? Explain and demonstrate the following string functions from `<string.h>`: `strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strstr`, `strtok`, `strrev`.

**Q45.** Write a C program that reads a sentence and: (a) counts the number of words, vowels, consonants, and digits, (b) converts to uppercase, (c) reverses the sentence word by word (not character by character). Explain the string manipulation logic used.

---

## Unit 5 — Pointers

**Q46.** What is a pointer in C? Explain pointer declaration, initialization, and dereferencing with detailed examples. What is the difference between `int *p = &x` and `int *p = x`? What is a *null pointer*, and why should you initialize pointers?

**Q47.** Explain pointer arithmetic in C. What operations are valid on pointers? Trace through the following: if `int a[] = {10, 20, 30, 40}` and `int *p = a`, what is the value of `*(p+2)`, `p[3]`, `*(p++)`, `*++p`? Explain why you cannot multiply two pointers.

**Q48.** Explain the relationship between pointers and arrays in C. Why does the array name act as a constant pointer? Write a program to traverse an array using a pointer instead of an index. What is the difference between `a[i]` and `*(a+i)`?

**Q49.** Explain pointer-to-pointer (double pointer) in C. Give a scenario where it is necessary. Write a program that uses a double pointer to dynamically allocate a 2D array.

**Q50.** Describe string manipulation using pointers. Write C functions (using only pointer operations, no array indexing) to: (a) compute string length, (b) copy one string to another, (c) concatenate two strings, (d) compare two strings.

**Q51.** What is dynamic memory allocation in C? Explain `malloc()`, `calloc()`, `realloc()`, and `free()` with syntax and examples. What is a *memory leak*, and how does `free()` prevent it? Write a program to dynamically create an array of n integers entered by the user.

**Q52.** Explain the `new` and `delete` operators for dynamic allocation. How do they differ from `malloc/free`? (Note: these are C++ operators; explain in the context of C++ compatibility discussed in C courses.) Write a program using `new` to allocate a 1D array dynamically.

**Q53.** What are *function pointers* in C? Explain declaration, assignment, and calling syntax. Write a program that uses an array of function pointers to implement a simple calculator — each operation (+, -, *, /) is pointed to by a function pointer.

**Q54.** Explain `const` pointers vs. pointers to `const` in C. What is the difference between: (a) `const int *p`, (b) `int * const p`, (c) `const int * const p`? Give a practical use case for each.

---

## Unit 6 — User-defined Datatypes and Memory Allocation

**Q55.** What are enumerated data types (`enum`) in C? How are they declared and used? What are their default values, and how can you assign custom values? Write a program that uses `enum` to represent days of the week and prints whether a given day is a weekday or weekend.

**Q56.** Define a structure in C. How is it different from an array? Explain: (a) declaring a structure, (b) defining a structure variable, (c) accessing members using `.` operator, (d) initializing a structure. Write a program using a structure to store and display student records (roll number, name, marks in 5 subjects, average).

**Q57.** Explain *arrays of structures* in C. Write a program to maintain a phone book: store 5 contacts (name, phone number, email) in an array of structures, and implement search by name.

**Q58.** Explain *pointers to structures* in C. What is the `->` (arrow) operator and when is it used? Rewrite the student record program from Q56 using a pointer to the structure. Explain how passing a structure pointer to a function is more efficient than passing by value.

**Q59.** Explain *nested structures* in C (structure within a structure). Write a program to store employee data: each employee has a name, ID, and a `date_of_joining` (which is itself a structure with day, month, year fields). Print the employee who joined earliest.

**Q60.** Define a `union` in C. How does it differ from a `struct`? Explain memory allocation in a union. Write a program that uses a union to store either an integer, float, or character and prints the currently active member. What hazards can arise with unions?

**Q61.** What is `typedef` in C? How can `typedef` be combined with `struct` and `union` to simplify code? Rewrite the student structure from Q56 using `typedef`. What is the advantage of `typedef` over `#define` for type aliasing?

**Q62.** Compare and contrast *static* vs. *dynamic* memory allocation in C. Explain: (a) where statically allocated variables are stored (stack/BSS/data segment), (b) where dynamically allocated memory lives (heap). What causes a *stack overflow*, and what causes a *heap overflow*?

**Q63.** Explain the use of `malloc()` and `calloc()` for memory allocation in detail. What is the difference between them regarding initialization? Write a program that: (a) builds a linked list of integers dynamically, (b) traverses and prints it, (c) frees all nodes.

**Q64.** Describe *bit fields* in C structures. Write a program that uses bit fields to compactly represent a date (day: 5 bits, month: 4 bits, year: 12 bits) inside a structure. What is the advantage of bit fields in embedded/systems programming?

---

## Unit 7 — File Access

**Q65.** What is a file in C? Explain the difference between text files and binary files. Why is file I/O necessary? Describe the `FILE` pointer and the `fstream` header. Explain the modes: `"r"`, `"w"`, `"a"`, `"r+"`, `"w+"`, `"a+"`, `"rb"`, `"wb"`.

**Q66.** Explain `fopen()` and `fclose()` in detail. What happens if `fopen()` fails, and how should you handle it? Write a program that opens a file, writes 10 student records (name, roll no., marks) to it, closes it, reopens it, and reads and displays all records.

**Q67.** Explain character-level file I/O using `fgetc()` / `getc()` and `fputc()` / `putc()`. Write a program that: (a) copies one text file to another character by character, (b) counts the number of vowels, consonants, lines, and words in a text file.

**Q68.** Explain `fgets()` and `fputs()` for line-by-line file I/O. How do they differ from `gets()` and `puts()`? Write a program that reads a text file line by line and prints each line with a line number prefix, then writes the numbered output to a new file.

**Q69.** Explain `fread()` and `fwrite()` for binary file I/O. When should you use binary mode over text mode? Write a program that: (a) writes an array of structures to a binary file, (b) reads it back and prints the data. Explain the parameters of `fread()` / `fwrite()` in detail.

**Q70.** Explain random file access in C using `fseek()`, `ftell()`, and `rewind()`. What are the three seek origins: `SEEK_SET`, `SEEK_CUR`, `SEEK_END`? Write a program that updates a specific record in a binary file of student structures without rewriting the entire file.

**Q71.** What is `fprintf()` and `fscanf()`? How are they different from `printf()` and `scanf()`? Write a program that logs all user inputs with timestamps to a log file using `fprintf()`, then uses `fscanf()` to read them back.

**Q72.** Explain error handling in file operations using `ferror()`, `feof()`, `clearerr()`, and `perror()`. Write a robust file-copy program that handles all possible errors: file not found, insufficient permissions, disk full, etc.

---

## Unit 8 — Mixed / Application Questions

**Q73.** Write a complete C program to implement a **student grade management system** that:

- Stores data for n students (name, roll number, marks in 5 subjects) using structures
- Calculates the total and percentage for each student
- Assigns grades (O/A+/A/B+/B/C/F) based on percentage
- Sorts students by percentage in descending order
- Writes all results to a file and reads them back

Explain each section of your program.

**Q74.** Explain *recursion* and *iteration* as two approaches to solving the Tower of Hanoi problem. Write a recursive C program to solve Tower of Hanoi for n disks. What is the time complexity? How many moves are needed for n=4? Trace the execution for n=3.

**Q75.** Explain what a *Fibonacci sequence* is. Write C programs to compute the nth Fibonacci number using: (a) simple recursion, (b) iteration, (c) memoization (storing previously computed values in an array). Compare the time complexity of each approach.

**Q76.** What is a *sparse matrix*? How is it stored efficiently in C? Write a program to: (a) represent a sparse matrix using a 3-column array (row, col, value), (b) add two sparse matrices represented this way, (c) display the result in standard matrix form.

**Q77.** Explain command-line argument processing in C. Write a program `mycat` that mimics the Unix `cat` command: it accepts one or more filenames as command-line arguments and prints their contents to stdout. Handle the case where no arguments are given (read from stdin).

**Q78.** Write a C program to implement a **simple stack** using arrays. Implement push, pop, peek, isEmpty, and isFull operations. Then use this stack to: (a) check whether a given string is a palindrome, (b) check balanced parentheses in an expression.

**Q79.** Describe the concept of *multi-file programming* in C. Explain header files (`.h`), source files (`.c`), and how `#include` connects them. What is the purpose of *include guards* (`#ifndef FILE_H`... `#endif`)? Show a small example with a `math_utils.h`, `math_utils.c`, and `main.c`.

**Q80.** Explain dynamic memory allocation for a 2D matrix in C using pointer-to-pointer. Write a program that: (a) dynamically allocates an m×n matrix, (b) fills it with random numbers, (c) finds the row with the maximum sum, (d) frees all allocated memory correctly.

---

## Unit 9 — Previous Year Pattern Questions (CBCS-style adapted for NEP)

**Q81.** What do you mean by structured programming? What are its characteristics? Distinguish between structured and unstructured programming with examples. How did the GOTO statement violate structured programming principles?

**Q82.** Explain the difference between `while` loop and `do-while` loop. In what situation will a `do-while` loop execute at least once even if the condition is false from the beginning? Write both loops to compute the sum of digits of a number.

**Q83.** What is a pointer? Why do we use pointers? Explain with examples: (a) passing arrays to functions using pointers, (b) returning a pointer from a function, (c) why you should never return a pointer to a local variable.

**Q84.** Explain the concept of *string* in C. Why does C not have a built-in string type? Write a program to: (a) check if a string is a palindrome, (b) count the frequency of each character in a string, (c) remove all duplicate characters from a string.

**Q85.** Explain what `static` variables inside a function mean. How is a `static` local variable different from a global variable even though both persist across function calls? Write a program demonstrating static local variables for counting how many times a function is called.

**Q86.** What is the difference between `#define` and `const` for defining constants in C? Which is preferred and why? Write a program showing a case where using `#define` can cause unexpected bugs (hint: no type checking) while `const` avoids it.

**Q87.** Write a C program to implement *matrix multiplication*. Check the compatibility of the matrices before multiplication. Explain the algorithm (O(n³) complexity). How would you optimize it for sparse matrices?

**Q88.** Explain the storage of a 2D array in row-major order. For an array `int a[3][4]`, if the base address is 2000 and each int takes 4 bytes, calculate the address of `a[2][3]` using the row-major formula. Write a function that accepts a 2D array and prints it in spiral order.

**Q89.** What is the `sizeof` operator? Is it a function or an operator? Write a program that prints the sizes of all fundamental data types. Explain padding and alignment in structures — why does `sizeof(struct)` sometimes exceed the sum of sizes of its members?

**Q90.** Explain *type conversion in assignments*. What happens when you assign a `double` to an `int`? When you assign an `int` to a `char`? Write a program that demonstrates both implicit narrowing and widening conversions, and show how to use explicit casting to control the result.

---

## Unit 10 — Long Answer / Essay Type (10–15 marks equivalent)

**Q91.** Write a comprehensive note on **pointers in C** covering: (a) fundamentals and memory model, (b) pointer arithmetic, (c) pointers and arrays, (d) pointers and strings, (e) pointers and functions (call by reference), (f) pointers and structures, (g) dynamic memory allocation using pointers, (h) common pointer bugs (dangling pointer, wild pointer, memory leak). Use code examples throughout.

**Q92.** Describe the C preprocessor in depth. Explain: (a) the sequence of preprocessing steps before compilation, (b) all preprocessor directives, (c) parameterized macros and their limitations compared to inline functions, (d) conditional compilation and its uses in cross-platform code, (e) the `#pragma` directive. Show a real-world use case (e.g., debug logging that can be switched off).

**Q93.** Write a detailed essay on **user-defined data types in C**. Cover: (a) `enum` — use in state machines, (b) `struct` — use for records, (c) `union` — use for type-punning and memory overlay, (d) `typedef` for readability, (e) nested and self-referential structures (linked list node), (f) bit fields. Provide a complete program that uses all of these.

**Q94.** Explain **file handling in C** comprehensively. Cover: (a) the concept of streams and FILE *, (b) opening/closing files, (c) sequential vs. random access, (d) text vs. binary files, (e) all standard I/O functions for files, (f) error handling. Write a complete mini-database program that maintains a file of employee records and supports: add, search by ID, update salary, delete, and list-all operations.

**Q95.** Write a detailed note on **functions in C**. Include: (a) why functions are necessary (code reuse, modularity), (b) function prototype, definition, and call, (c) parameter passing mechanisms, (d) return types including void, (e) recursive functions with examples, (f) function pointers and callbacks, (g) command-line arguments, (h) variable-argument functions (`printf` itself as an example). Provide at least four complete programs.

**Q96.** Explain **arrays and strings in C** in depth. Cover: (a) 1D array declaration, access, and common algorithms (search, sort, reverse), (b) 2D arrays and matrix operations, (c) the array-pointer equivalence, (d) strings as character arrays, (e) all major string library functions with implementation from scratch, (f) array of strings. Write programs to: (i) sort an array of strings alphabetically, (ii) implement a simple word-frequency counter.

**Q97.** Describe the **decision-making and looping constructs** of C comprehensively. Compare `if`, `if-else`, `nested if-else`, `switch`, and ternary operator. Compare `while`, `do-while`, `for`, and nested loops. Explain `break`, `continue`, `goto`, and `return` as loop-control modifiers. Write programs for: (a) printing all prime numbers from 2 to 1000 using nested loops, (b) a number guessing game using `do-while`, (c) a simple menu-driven program using `switch`.

**Q98.** Describe the **complete data type system in C** including: (a) all primitive types with sizes and ranges, (b) type modifiers, (c) derived types (arrays, pointers, functions), (d) user-defined types (struct, union, enum), (e) type conversion rules (integer promotion, usual arithmetic conversion), (f) overflow and underflow behaviour. Write programs illustrating at least five non-obvious type conversion scenarios.

**Q99.** Write a complete, well-commented C program implementing a **simple library management system** using: structures (for books: title, author, ISBN, copies), file I/O (to persist data between runs), functions (add book, search by title/author, issue book, return book, display all), dynamic memory (to hold the catalog in memory during runtime). Explain the design decisions made.

**Q100.** Explain the **compilation process** in C in detail. Describe the four stages: (a) Preprocessing — what changes, (b) Compilation — converting to assembly, (c) Assembly — producing object code, (d) Linking — resolving symbols and producing executable. Explain what happens at each stage to the source code. What are `.o` files, `.a` (static library) files, and `.so` (shared library) files? How does the linker resolve external references?

---

## Unit 11 — Bonus Questions (Practice Set)

**Q101.** Write a C program to implement **bubble sort**, **selection sort**, and **insertion sort** on an array of n integers. After each pass of bubble sort, print the state of the array. Analyse the time and space complexity of each.

**Q102.** Explain *dangling pointers* and *wild pointers* in C. What causes each? Write small programs that demonstrate both bugs, and then show the corrected versions. What is a *smart pointer*, and why doesn't C have one natively (C++ does)?

**Q103.** Write a C program to evaluate a **postfix expression** (e.g., `3 4 + 5 *`) using a stack implemented as an array. Explain the algorithm step by step with the example.

**Q104.** Explain **recursive descent** in C by writing a recursive program that evaluates a mathematical expression given as a string (supporting `+`, `-`, `*`, `/` and parentheses). What is the limitation of this approach?

**Q105.** Write a C program to implement a **singly linked list** using structures and dynamic memory. Include: insert at beginning, insert at end, insert at position, delete by value, search, display, and free the entire list. Explain why linked lists are preferable to arrays for frequent insertions/deletions.

**Q106.** Explain *macro vs. function* debate in C in depth. Write a generic `SWAP` macro and a typed swap function. Show cases where the macro fails (side effects) and the function is safer. When would you still choose a macro?

**Q107.** Write a C program to read a text file and build a **frequency table of all words** (case-insensitive). Sort the words alphabetically and print each word with its count. Use dynamic memory, strings, structures, and file I/O.

**Q108.** Explain how `printf()` works internally as a variadic function. Rewrite a simplified `my_printf()` function that handles `%d`, `%f`, `%c`, and `%s` format specifiers using `<stdarg.h>`.

**Q109.** Write a C program that uses **bit manipulation** to: (a) set a particular bit, (b) clear a particular bit, (c) toggle a particular bit, (d) check if a number is a power of 2, (e) count the number of set bits (Brian Kernighan's algorithm), (f) reverse the bits of a 32-bit integer.

**Q110.** Write a complete C program for a **text-based tic-tac-toe game** for two players. Use a 2D array for the board, functions for: displaying the board, checking win/draw conditions, and taking turns. Explain each function. How would you extend this to play against the computer?

---

## Quick Reference: Syllabus Unit Map

| Unit | Topics | Questions |
|------|--------|-----------|
| 1 | History, Structure, Algorithms, Tokens, Data Types, Storage Classes | Q1–Q12 |
| 2 | Operators, Expressions, Preprocessor, I/O | Q13–Q24 |
| 3 | if-else, switch, while, do-while, for, break, continue, goto | Q25–Q34 |
| 4 | Functions, Arrays, Strings, Recursion | Q35–Q45 |
| 5 | Pointers, Pointer Arithmetic, Dynamic Allocation | Q46–Q54 |
| 6 | enum, struct, union, typedef, Memory | Q55–Q64 |
| 7 | File I/O, fopen/fclose, fread/fwrite, fseek | Q65–Q72 |
| 8 | Application / Integrated Programs | Q73–Q80 |
| 9 | Previous Year Pattern | Q81–Q90 |
| 10 | Long Answer / Essay | Q91–Q100 |
| 11 | Bonus / Advanced Practice | Q101–Q110 |

---

::: tip Exam Strategy
- **5-mark questions**: Answer Q1–Q80 type (pick any sub-part)
- **10-mark questions**: Answer Q91–Q100 type (write full essay with programs)
- **Lab Viva**: Know programs from Q41, Q43, Q44, Q51, Q63, Q69 thoroughly
- Always write programs with proper `#include`, `main()`, and sample output
:::
::: info Key Programs to Memorise
Fibonacci (iterative + recursive) · Factorial · GCD · Prime check · Palindrome · Matrix multiplication · Bubble sort · Dynamic array · File copy · Linked list node (struct + malloc)
:::