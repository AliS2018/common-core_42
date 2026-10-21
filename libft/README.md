*This project has been created as part of the 42 curriculum by alsadyko.*
# Libft

1. [Description](#description)
2. [Library Contents and Expected Function Behaviour](#library-contents-and-expected-function-behaviour)
    1. [Character Classification](#character-classification)
    2. [Character Conversion](#character-conversion)
    3. [String Manipulation](#string-manipulation)
    4. [Memory Manipulation](#memory-manipulation)
    5. [Numeric Conversion](#numeric-conversion)
    6. [Output and File Descriptors](#output-and-file-descriptors)
    7. [Linked List Operations](#linked-list-operations)
    8. [Total Number of Functions](#total-number-of-functions)
3. [Instructions](#instructions)
4. [Resources](#resources)
    1. [References](#references)
    2. [Testing Tools](#testing-tools)
    3. [AI Usage](#ai-usage)

## Description
**Libft** is a custom static library developed as part of the 42 curriculum. It recreates selected functions from the standard C library, along with additional utility functions, to help students understand how commonly used programming tools work under the hood.

The purpose of this project is to develop a solid foundation in C programming by solving practical problems that are often abstracted away (looking at you JS).

By implementing these functions from scratch, students - and thus, me - learn the underlying mechanics, data structures, memory management techniques, and algorithms that make these tools work.

Thanks to 42's hands-on approach to learning, students like us are encouraged to explore these concepts independently, develop problem solving skills, and gain a deeper understanding of what happens behind the scenes rather than simply relying on existing libraries.

## Library Contents and Expected Function Behaviour
*This library contains a total of:*
**43** - Functions
**1** - libft.h header
**1** - Makefile
**1** - README.md

### Character Classification
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
|`ft_substr`| Extracts a substring from a string, starting at a specified index and up to a given length. | A newly allocated substring. For example, `ft_substr("WELCOMEHOME", 0, 7)` returns `"WELCOME"`. |
|`ft_strjoin`| Joins two separate strings into one. | A newly allocated string made of both strings joined together. For example, `ft_strjoin("WELCOME", "HOME")` returns `"WELCOMEHOME"`. |
|`ft_strtrim`| Removes characters from the beginning and end of a string based on a specified set of characters. | Similar in purpose to Java's `String.trim()` or JavaScript's `trim()`, but instead of removing only whitespace, `ft_strtrim` removes any occurrences of the characters in the set from the beginning and end of the input string. For example, `ft_strtrim("### SUPER MAN ###", "#")` returns `" SUPER MAN "`. Notice that the spaces at the beginning and end remain, because only `#` characters are trimmed. To remove the spaces as well, include a space in the set: `ft_strtrim("### SUPER MAN ###", "# ")` returns `"SUPER MAN"`. |
|`ft_split`| Splits a string into an array of separate strings using a delimiter character. | An array of strings. For example, `ft_split("SUPER@CALI@FRAGI@LISTIC@EXPIA@LI@DOCIOUS", '@')` splits the string at each `@`. Printing each result with `printf("%s\n", str)` gives:<pre>SUPER<br>CALI<br>FRAGI<br>LISTIC<br>EXPIA<br>LI<br>DOCIOUS</pre> |
|`ft_strlcpy`|Copies a string from the source into the destination, ensuring that the copied string is null-terminated when the destination buffer has a size greater than zero. It copies at most `size - 1` characters and accounts for the terminating null character.|Returns the length of the source string, regardless of how many characters are copied. If the return value is greater than or equal to size, the source string was truncated or the destination was too small to hold the entire string and its terminating null character. For example, `ft_strlcpy(dest, "HELLO", 5);` returns 5 and copies  `"HELL"` into `dest`, followed by `\0`. If size is `0`, nothing is copied, but the source string's length is still returned.|
|`ft_strlcat`|Concatenates the source string to the end of the destination string, ensuring that the result is null-terminated when the destination buffer has enough space. It appends at most the available space minus one character for the terminating null character.|Returns the total length of the string it tried to create: the initial length of the destination plus the length of the source. If the return value is greater than or equal to size, the result was truncated. For example, if `dest` contains `"HELLO"` and `size` is `10`, `ft_strlcat(dest, "WORLD", 10)` returns `10` and `dest` becomes `"HELLOWORL"`, followed by `\0`, because only 4 characters fit. If `size` is less than or equal to the length of the destination, nothing is appended, and it returns `size` plus the length of the source. For example, `ft_strlcat(dest, "WORLD", 3)` returns `8`.|
|`ft_strchr`|Searches for the first occurrence of a specified character in a string, starting from the beginning and including the terminating null character (`\0`).|`ft_strchr` returns a pointer to the first occurrence of the specified character in the string. If the character is not found, it returns `NULL`. For example, `ft_strchr("HELLO", 'L');` returns a pointer to the first `'L'`, while `ft_strchr("HELLO", 'X');` returns `NULL`. Searching for `\0` returns a pointer to the string's terminating null character.|
|`ft_strrchr`| `ft_strrchr` does essentially the same thing as `ft_strchr`, but instead of returning the first occurrence of a specified character, it returns the last occurrence.|The same checks and returns apply to this function as in `ft_strchr` just in reverse|
|`ft_strncmp`| Compares two strings character by character, up to a specified number of characters. It stops when two characters differ, the end of a string (`\0`) is reached, or the specified limit is reached. | `ft_strncmp` returns an integer indicating the difference between the first pair of characters that differ. It returns `0` if the characters compared are identical or if the specified limit is reached without finding a difference. For example, `ft_strncmp("HELLO", "HEXXO", 2)` returns `0`, while `ft_strncmp("HELLO", "HEXXO", 5)` returns a negative value because `'L'` comes before `'X'` in the character set.
|`ft_strnstr`|Searches for the first occurrence of a substring within a larger string, searching at most the specified number of characters in the larger string.|A pointer to the beginning of the first occurrence of the substring, or `NULL` if it isn’t found within the given number of characters. If the substring is empty, it returns a pointer to the larger string itself. For example, `ft_strnstr("HELLOWORLD", "WORLD", 10)` returns a pointer to `"WORLD"`, while `ft_strnstr("HELLOWORLD", "WORLD", 7)` returns `NULL`, because the whole substring has to fit within the first 7 characters.|
|`ft_strlen`|Counts the total number of characters in a string, excluding the terminating null character (`\0`).|An integer representing the string's length. For example, `ft_strlen("HELLOWORLD")` returns `10`.|
|`ft_strmapi`|Creates a new string by applying a specified function to each character of the original string, passing the character’s index and value to the function. The original string remains unchanged.|A newly allocated string containing the results of the function, or `NULL` if the allocation fails. For example, with a function that uppercases characters at even indexes, `ft_strmapi("hello", f)` returns `"HeLlO"`, while the original string stays `"hello"`.|  
|`ft_striteri`|Iterates through each character of a string and applies a specified function to each character, passing its index and a pointer to the character so that its value can be modified directly.|Nothing (`void`). The string is modified in place. For example, with a function that uppercases characters at even indexes, calling `ft_striteri(str, f)` on a string containing `"hello"` changes it to `"HeLlO"`.|
|`ft_strdup`| Creates a copy of a string by allocating new memory and copying every character into it, including the terminating null character (`\0`). The original string remains unchanged. | A pointer to the newly allocated copy, or `NULL` if the allocation fails. For example, `ft_strdup("HELLO")` returns a new string containing `"HELLO"`. Since the copy is allocated, it must be freed with `free()` when it’s no longer needed. |
>[!NOTE] Usage notes
> **`ft_strtrim`** removes matching characters only from the beginning and the end of the string. Any matching characters inside the string remain unchanged
> 
> **`ft_split`** does not produce empty strings when encountering consecutive delimiters. For example, `ft_split("hello,,world", ',');` produces `"hello"` and `"world"`, NOT `"hello", "", "world"`.
### Memory Manipulation
| Function   | Description | Returns |
| ---------- | ----------- | ------- |
|`ft_memchr`| Scans the first `n` bytes of a memory area for the first occurrence of a specified byte. Unlike `ft_strchr`, it doesn’t stop at `\0`: it always looks at exactly `n` bytes, so it works on any data, not just strings. | A pointer to the first matching byte, or `NULL` if it isn’t found within `n` bytes. For example, `ft_memchr("HELLO", 'L', 5)` returns a pointer to the first `'L'`, while `ft_memchr("HELLO", 'X', 5)` returns `NULL`. |  
|`ft_memcmp`| Compares two memory areas byte by byte, up to `n` bytes. Like `ft_strncmp`, but it doesn’t stop at `\0`, so it compares exactly `n` bytes. | An integer: `0` if the compared bytes are identical, otherwise the difference between the first pair of differing bytes. For example, `ft_memcmp("HELLO", "HELP", 3)` returns `0`, while `ft_memcmp("HELLO", "HELP", 4)` returns a negative value because `'L'` comes before `'P'`. |  
|`ft_memcpy`| Copies `n` bytes from a source memory area to a destination. It copies front to back and assumes the two areas don’t overlap. It doesn’t add a `\0`, so to copy a string you have to include the terminator in `n` yourself. | A pointer to the destination. For example, `ft_memcpy(dest, "HELLO", 6)` copies `"HELLO"` plus its `\0` into `dest`. |  
|`ft_memmove`| Copies `n` bytes from a source to a destination, like `ft_memcpy`, but safely handles overlapping memory areas. It copies back to front when copying front to back would overwrite bytes before they’re read. | A pointer to the destination. For example, with a buffer containing `"ABCDEF"`, `ft_memmove(buf + 2, buf, 4)` turns it into `"ABABCD"`. Doing the same with `ft_memcpy` could give `"ABABAB"`, because the bytes it copies overwrite the source while it’s still reading it. |  
|`ft_memset`| Fills the first `n` bytes of an existing memory area with a specified byte. It doesn’t allocate anything; it overwrites memory you already have. | A pointer to the memory area. For example, with a buffer containing `"HELLOWORLD"`, `ft_memset(buf, 'X', 5)` turns it into `"XXXXXWORLD"`. |  
|`ft_bzero`| Sets the first `n` bytes of an existing memory area to zero. It’s the same as calling `ft_memset` with `0`. | Nothing (`void`). For example, with a buffer containing `"HELLO"`, `ft_bzero(buf, 5)` sets all five bytes to `\0`, so printing it afterwards shows an empty string. |  
|`ft_calloc`| Allocates memory for an array of a given number of elements, each of a given size, and sets every byte to zero. It’s like `malloc` followed by `ft_bzero`. | A pointer to the newly allocated, zeroed memory, or `NULL` if the allocation fails. For example, `ft_calloc(5, sizeof(int))` allocates space for 5 ints, all set to `0`. |

>[!WARNING] Usage Warning
>**ft_memmove:** The forward-copy loop initializes `i` (a `size_t`) to `-1` and uses a pre-increment. This relies on unsigned wraparound (`SIZE_MAX + 1 == 0`), which is well-defined in C. It was done to meet the Norm’s 25-line limit. Changing `++i` to `i++`, or `i` to a signed type, will break the loop.
### Numeric Conversion
| Function | Description | Returns |
| -------- | ----------- | ------- |
| `ft_atoi`  | `ft_atoi` or ascii to integer is a function that converts your string representing a number into its corresponding integer, recognising an optional negative (-) or positive (+) signs and skipping leading whitespace, spaces and tabs too| `ft_atoi` returns the integer represented by the initial numeric portion of the string. It returns 0 if no valid number can be converted, such as when the string starts with non-numeric characters or contains multiple signs before any digits, For example, `ft_atoi("   42");` results in `42` while `ft_atoi("--42");` or `ft_atoi("++42");` results in `0`|
| `ft_itoa`  | `ft_itoa` or integer to ascii is a function that converts an integer into its corresponding string representation string representation, recognising an optional negative or positive signs  |Returns a string representing the given integer. For example, `ft_itoa(42)` returns `"42"`, while `ft_itoa(-42)` returns `"-42"`. If the integer is `0`, it returns `"0"`.|
### Output and File Descriptors
|**Function**|**Description**|**Returns**|
|---|---|---|
|`ft_putchar_fd`|Writes a single character to the specified file descriptor.|Using this as `ft_putchar_fd('H',1);` writes the character `'H'` to standard output (`stdout`), while `ft_putchar_fd('W', 2);` writes the character `'W'` to standard error (`stderr`) |
|`ft_putstr_fd`|Writes a string to the specified file descriptor, excluding the terminating null character (`\0`).|the same logic as in `ft_putchar_fd` applies to this function too|
|`ft_putendl_fd`|Writes a string to the specified file descriptor, followed by a newline character (`\n`).|Nothing (`void`). For example, `ft_putendl_fd("HELLO", 1);` writes `"HELLO"` followed by a newline to standard output (`stdout`), so the next output starts on a new line.|  
|`ft_putnbr_fd`|Writes an integer to the specified file descriptor, converting the number into its string representation, including a negative sign (`-`) for negative integers.|Nothing (`void`). For example, `ft_putnbr_fd(42, 1);` writes `42` to standard output, while `ft_putnbr_fd(-42, 2);` writes `-42` to standard error (`stderr`). It also handles the smallest possible integer: `ft_putnbr_fd(-2147483648, 1);` writes `-2147483648`.|
### Linked List Operations
| Function        | Description | Returns |
| --------------- | ----------- | ------- |
|`ft_lstnew`| Creates a new list node, storing the given content and setting its `next` pointer to `NULL`. | A pointer to the newly allocated node, or `NULL` if the allocation fails. For example, `ft_lstnew(ft_strdup("HELLO"))` returns a node whose content is `"HELLO"` and whose `next` is `NULL`. |  
|`ft_lstadd_front`| Adds a node to the beginning of a list, making it the new first element. | Nothing (`void`). For example, adding a node `A` to the list `B -> C` results in `A -> B -> C`, and the list pointer now points to `A`. |  
|`ft_lstsize`| Counts the number of nodes in a list by walking through it until the end (`NULL`) is reached. | An `unsigned int` representing the number of nodes. For example, `ft_lstsize` on the list `A -> B -> C` returns `3`, while an empty list (`NULL`) returns `0`. |  
|`ft_lstlast`| Walks through a list to find its final node. | A pointer to the last node, or `NULL` if the list is empty. For example, `ft_lstlast` on the list `A -> B -> C` returns a pointer to `C`. |  
|`ft_lstadd_back`| Adds a node to the end of a list. If the list is empty, the new node becomes the first element. | Nothing (`void`). For example, adding a node `C` to the list `A -> B` results in `A -> B -> C`. |  
|`ft_lstdelone`| Deletes a single node: frees its content using the `del` function passed by the caller, then frees the node itself. The `next` node is not freed, so the rest of the list is left untouched. | Nothing (`void`). The `del` function decides how the content is cleaned up. For example, `ft_lstdelone(node, free)` calls `free` on the node’s content, then frees the node. Passing a different function lets you clean up content that needs special handling, such as a struct with allocated fields inside it. |  
|`ft_lstclear`| Deletes every node in a list, one by one, using `ft_lstdelone` with the given `del` function. The next node is saved before each deletion so the list can still be walked safely. | Nothing (`void`). Once every node is deleted, the list pointer is set to `NULL`. For example, after `ft_lstclear(&list, free)` on the list `A -> B -> C`, all three nodes and their contents are freed and `list` is `NULL`. |  
|`ft_lstiter`| Iterates through a list and applies a specified function to the content of each node. The list structure itself is not changed. | Nothing (`void`). For example, passing a function that converts a string to uppercase turns a list of `"hello" -> "world"` into `"HELLO" -> "WORLD"`, modifying each content in place. |  
|`ft_lstmap`| Creates a new list by applying a specified function to the content of each node in the original list. The original list remains unchanged. | A pointer to the first node of the new list, or `NULL` if any allocation fails. In that case, every node already created is freed using the `del` function, so no memory is leaked. For example, mapping a function that duplicates and uppercases strings over `"hello" -> "world"` returns a new list `"HELLO" -> "WORLD"`, while the original list still contains `"hello" -> "world"`. |

### Total Number of Functions
**43**
>[!WARNING]
> **Memory management:** the following functions allocate memory with `malloc`, and the caller is responsible for freeing it with `free()` once it's no longer needed. Not doing so causes memory leaks in your program.
> * `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_itoa`, `ft_strmapi`: free the returned pointer.
> * `ft_split`: free each string in the array first, then the array itself.
> * `ft_lstnew`, `ft_lstmap`: free the nodes with `ft_lstdelone` or `ft_lstclear`.
>
> All of these return `NULL` if the allocation fails, so check the return value before using it.
## Instructions
>[!IMPORTANT] **Requirements**
>To compile this static library you need `make` and a C compiler available as `cc` (gcc or clang).
>Refer to this table to install an appropriate tooling on your system

| OS | CLI Command |
| --- | --- |
| Debian / Ubuntu | `sudo apt update; sudo apt -y install build-essential` |
| Fedora / Rocky | `sudo dnf install gcc make` |
| Arch Linux | `sudo pacman -S base-devel` |
| macOS | `xcode-select --install` |
> To check that both are installed, run `cc --version` and `make --version`

### Building 
Clone the repository and run `make` at its root:
```sh
git clone <this_repo_url> libft
cd libft
make all
```
This produces the static library called `libft.a`.
>[!NOTE] Makefile rules
> The Makefile provides the following rules:
> * `make` or `make all`: compiles the static library `libft.a`
> * `make clean`: removes the object files
> * `make fclean`: removes the object files and `libft.a`
> * `make re`: rebuilds everything from scratch

### Using the library
Include the header in your code:
```c
#include "libft.h"
```
Then compile your program and link it against `libft.a`:
```sh
cc -Wall -Wextra -Werror main.c -L. -lft
```
`-L.` tells the compiler to look for libraries in the current directory, the same way `-I` tells it where to look for header files. 
>[!NOTE] 
> `-lft` links `libft.a`. The linker automatically adds the `lib` prefix and the file extension to the name given after `-l`, so `-lft` becomes `libft.a`. If the library is in another folder, replace `.` with its path, and add `-I<path>` so the compiler can find `libft.h`.

## Resources

### References
- **Linux manual pages** (`man <function>`): Reference for the behavior of standard C library functions reimplemented in this project.
- **FreeBSD Manual Pages** ([man.freebsd.org](https://man.freebsd.org/)): Online reference for BSD-originated functions, such as `strlcpy` and `strlcat`, and their expected behavior.
- **The libft subject PDF**: Reference for the required function prototypes, implementation requirements
- **The C Programming Language**, 2nd Edition, by Brian W. Kernighan and Dennis M. Ritchie: Further reading on C syntax, pointers, pointer arithmetic, and memory manipulation.
### Testing Tools
- **Valgrind**: checking the allocating functions for memory leaks
- **Francinette**: running the project against a third-party test suite
- **LibftTester**: additional tester to see if both testing tools resulted in the same output
- **My own tester** not present in the vogsphere repo but can be found inside workspace branch under libft project in [my github](https://github.com/AliS2018/common-core_42/) or my self-hosted [forgejo](https://repo.md-archive.com/md-archive/common-core) repositories
### AI Usage
AI was used as a learning aid for concepts that were new to me:
- **Memory allocation**: how `malloc`/`free` work and who is responsible for freeing returned memory
- **Linked lists**: the basics of node structure and list traversal, which took the most time to understand before writing the `ft_lst*` functions
- **Edge-case review**: `ft_split`, `ft_itoa`, `ft_calloc` were reviewed with Claude Code and ChatGPT in parallel to look for edge cases that could cause memory leaks. `ft_calloc` was leaky but the edge case was detected by Francinette. 
- **README**: help with wording, grammar fixes, basic formatting tips (for warnings, tips and notes) and table formatting checks to keep the table from drifting sideways. 
