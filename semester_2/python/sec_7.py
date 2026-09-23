# Function to check palindrome
def is_palindrome(text):
    # Convert to lowercase for case-insensitive comparison
    text = text.lower()
    # Reverse the string and compare
    if text == text[::-1]:
        return True
    else:
        return False

# Main program
string = input("Enter a string: ")
if is_palindrome(string):
    print(f'"{string}" is a Palindrome')
else:
    print(f'"{string}" is not a Palindrome')