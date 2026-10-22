*This project has been created as part of the 42 curriculum by alsadyko.*
# LibFT
1. [Description](#description)
2. [Library Contents](#library-contents)
    1. [Character Classification](#character-classification)
    2. [Character Conversion](#character-conversion)
    3. [String Manipulation](#string-manipulation)
    4. [Memory Manipulation](#memory-manipulation)
    5. [Numeric Conversion](#numeric-conversion)
    6. [Output and File Descriptors](#output-and-file-descriptors)
    7. [Linked List Operations](#linked-list-operations)
    8. [Total amount of available functions](#total-amount-of-available-functions)
3. [Expected functions behaviour](#expected-functions-behaviour)
4. [Instructions](#instructions)
5. [Resources](#resources)
    1. [References](#references)
    2. [Testing Tools](#testing-tools)
    3. [AI Usage](#ai-usage)

## Description
This library presents with different small components that solve different parts of problems starting with character manipulations ending with memory related stuff
## Library Contents
This library contains a total of:
**43** - Functions
**1** - libft.h header
**1** - Makefile
**1** - README.md
## Character Classification
| Function     | Description                                                   | Returns                    |
| ------------ | ------------------------------------------------------------- | -------------------------- |
| `ft_isalnum` | Checks whether a character is alphanumeric (letter or digit). | `1` if true, `0` otherwise |
| `ft_isalpha` | Checks whether a character is an alphabetic letter.           | `1` if true, `0` otherwise |
| `ft_isascii` | Checks whether a character is an ASCII character (0–127).     | `1` if true, `0` otherwise |
| `ft_isdigit` | Checks whether a character is a decimal digit (`0`–`9`).      | `1` if true, `0` otherwise |
| `ft_isprint` | Checks whether a character is printable (ASCII 32–126).       | `1` if true, `0` otherwise |
### Character Conversion
| Function     | Description                                   | Returns                                                                             |
| ------------ | --------------------------------------------- | ----------------------------------------------------------------------------------- |
| `ft_tolower` | Converts an uppercase character to lowercase. | The lowercase equivalent, e.g. `'A'` → `'a'`. Unchanged if no conversion is needed. |
| `ft_toupper` | Converts a lowercase character to uppercase.  | The uppercase equivalent, e.g. `'b'` → `'B'`. Unchanged if no conversion is needed. |
### String Manipulation
| Function | Description | Returns |
| --- | --- | --- |
| `ft_substr` | Extracts a substring from a string, starting at a specified index and up to a given length. | A newly allocated substring. For example, `ft_substr("WELCOMEHOME", 0, 7)` returns `"WELCOME"`. |
| `ft_strjoin` | Joins two separate strings into one. | A newly allocated string made of both strings joined together. For example, `ft_strjoin("WELCOME", "HOME")` returns `"WELCOMEHOME"`. |
| `ft_strtrim` | Removes characters from the beginning and end of a string based on a specified set of characters. | Similar in purpose to Java's `String.trim()` or JavaScript's `trim()`, but instead of removing only whitespace, `ft_strtrim` removes any occurrences of the characters in the set from the beginning and end of the input string. For example, `ft_strtrim("### SUPER MAN ###", "#")` returns `" SUPER MAN "`. Notice that the spaces at the beginning and end remain, because only `#` characters are trimmed. To remove the spaces as well, include a space in the set: `ft_strtrim("### SUPER MAN ###", "# ")` returns `"SUPER MAN"`. |
| `ft_split` | Splits a string into an array of separate strings using a delimiter character. | An array of strings. For example, `ft_split("SUPER@CALI@FRAGI@LISTIC@EXPIA@LI@DOCIOUS", '@')` splits the string at each `@`. Printing each result with `printf("%s\n", str)` gives:<pre>SUPER<br>CALI<br>FRAGI<br>LISTIC<br>EXPIA<br>LI<br>DOCIOUS</pre> |
|`ft_strlcpy`|Copies a string from the source into the destination, ensuring that the copied string is null-terminated when the destination buffer has a size greater than zero. It copies at most `size - 1` characters and accounts for the terminating null character.||
|`ft_strlcat`|Concatenates the source string to the end of the destination string, ensuring that the result is null-terminated when the destination buffer has enough space. It appends at most the available space minus one character for the terminating null character.||
|`ft_strchr`|Searches for the first occurrence of a specified character in a string, starting from the beginning and including the terminating null character (`\0`).||
|`ft_strrchr`|Searches for the last occurrence of a specified character in a string, starting from the end and including the terminating null character (`\0`).||
|`ft_strncmp`|Compares two strings lexicographically, comparing at most the specified number of characters. The comparison stops when a difference is found, a terminating null character (`\0`) is reached, or the specified number of characters has been compared.||
|`ft_strnstr`|Searches for the first occurrence of a substring within a larger string, searching at most the specified number of characters in the larger string.||
|`ft_strlen`|Counts the total number of characters in a string, excluding the terminating null character (`\0`).|An integer representing the string's length. For example, `ft_strlen("HELLOWORLD")` returns `10`.|
|`ft_strmapi`|Creates a new string by applying a specified function to each character of the original string, passing the character's index and value to the function. The original string remains unchanged.||
|`ft_striteri`|Iterates through each character of a string and applies a specified function to each character, passing its index and a pointer to the character so that its value can be modified directly.||

>[!NOTE] Usage notes
> `ft_strtrim` removes matching characters only from the beginning and the end of the string. Any matching characters inside the string remain unchanged
> 
> `ft_split` does not produce empty strings when encountering consecutive delimiters. For example, `ft_split("hello,,world", ',');` produces `"hello"` and `"world"`, NOT `"hello", "", "world"`.
### Memory Manipulation


| Function   | Description | Returns |
| ---------- | ----------- | ------- |
| ft_memchr  |             |         |
| ft_memcmp  |             |         |
| ft_memcpy  |             |         |
| ft_memmove |             |         |
| ft_memset  |             |         |
| ft_bzero   |             |         |
| ft_calloc  |             |         |
### Numeric Conversion
| Function | Description | Returns |
| -------- | ----------- | ------- |
| ft_atoi  | `ft_atoi` or ascii to integer is a function that converts your string representing a number into its corresponding integer, recognising an optional negative (-) or positive (+) signs and skipping leading whitespace, spaces and tabs too| `ft_atoi` returns the integer represented by the initial numeric portion of the string. It returns 0 if no valid number can be converted, such as when the string starts with non-numeric characters or contains multiple signs before any digits, For example, `ft_atoi("   42");` results in `42` while `ft_atoi("--42");` or `ft_atoi("++42");` results in `0`|
| ft_itoa  | `ft_itoa` or integer to ascii is a function that converts an integer into its corresponding string representation string representation, recognising an optional negative or positive signs  |         |
### Output and File Descriptors
|**Function**|**Description**|**Returns**|
|---|---|---|
|`ft_putchar_fd`|Writes a single character to the specified file descriptor.||
|`ft_putstr_fd`|Writes a string to the specified file descriptor, excluding the terminating null character (`\0`).||
|`ft_putendl_fd`|Writes a string to the specified file descriptor, followed by a newline character (`\n`).||
|`ft_putnbr_fd`|Writes an integer to the specified file descriptor, converting the number into its string representation, including a negative sign (`-`) for negative integers.||
### Linked List Operations
| Function        | Description | Returns |
| --------------- | ----------- | ------- |
| ft_lstnew       |             |         |
| ft_lstadd_front |             |         |
| ft_lstsize      |             |         |
| ft_lstlast      |             |         |
| ft_lstadd_back  |             |         |
| ft_lstdelone    |             |         |
| ft_lstclear     |             |         |
| ft_lstiter      |             |         |
| ft_lstmap       |             |         |

### Total amount of available functions
**43**
## Expected functions behaviour
To understand what this project is supposed to do, we first need to understand how each function in the library behaves. This section goes into more depth on how each function works and what its purpose is. It is divided the same way as the Library Contents section, which should make it easier to explain each function's function.

## Instructions
To compile this library you must have `make` and a `cc` compiler installed on your system
Running  `make` or `make all` produces a static library called `libft.a`. To use it, include `libft.h` in your project and link against the archive when compiling
```text
    cc -Wall -Werror -Wextra -L. main.c -lft
```
## Resources

### References
- **Linux manual pages** (`man <function>`): Reference for the behavior of standard C library functions reimplemented in this project.
- **FreeBSD Manual Pages** ([man.freebsd.org](https://man.freebsd.org/)): Online reference for BSD-originated functions, such as `strlcpy` and `strlcat`, and their expected behavior.
- **The libft subject PDF**: Reference for the required function prototypes, implementation requirements, and bonus functions.
- **The C Programming Language**, 2nd Edition, by Brian W. Kernighan and Dennis M. Ritchie: Further reading on C syntax, pointers, pointer arithmetic, and memory manipulation.
### Testing Tools
- **Valgrind**: checking the allocating functions for memory leaks
- **Francinette**: running the project against a third-party test suite
- **LibftTester**: additional tester to see if both testing tools resulted in the same output
- **My own tester** not present in the vogsphere repo but can be found inside workspace branch under libft project in [my github](https://github.com/AliS2018/common-core_42/) or [forgejo](https://repo.md-archive.com/md-archive/common-core) repos
### AI Usage
AI was used as a learning aid for concepts that were new to me:
- **Memory allocation**: how `malloc`/`free` work and who is responsible for freeing returned memory
- **Linked lists**: the basics of node structure and list traversal, which took the most time to understand before writing the `ft_lst*` functions
- **Edge-case review**: `ft_split` and `ft_itoa` were reviewed with Claude Code and ChatGPT in parallel to look for edge cases that could cause memory leaks

