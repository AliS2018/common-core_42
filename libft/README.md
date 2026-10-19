*This project has been created as part of the 42 curriculum by alsadyko.*
# Libft

## Description
This library presents with different small components that solve different parts of problems starting with character manipulations ending with memory related stuff
## Library Contents

### Character Classification
```text
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
```
### Character Conversion
```text
├── ft_tolower.c
├── ft_toupper.c
```
### String Manipulation
```text
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_split.c
```
### Memory Manipulation
```text
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_bzero.c
├── ft_calloc.c

```
### Numeric Conversion
```text
├── ft_atoi.c
├── ft_itoa.c

```
### Output and File Descriptors
```text
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
```
### Linked List Operations
```text
├── ft_lstadd_back.c
├── ft_lstadd_front.c
├── ft_lstclear.c
├── ft_lstdelone.c
├── ft_lstiter.c
├── ft_lstlast.c
├── ft_lstmap.c
├── ft_lstnew.c
├── ft_lstsize.c
```
### Total amount of available functions
**43**

## Expected functions behaviour
To understand what this project is supposed to do, we first need to understand how each function in the library behaves. This section goes into more depth on how each function works and what its purpose is. It is divided the same way as the Library Contents section, which should make it easier to explain each function's function.

## Instructions
To compile this library you must have `make` and a `cc` compiler installed on your system
Running  `make` or `make all` produces a static library called `libft.a`. To use it, include `libft.h` in your project and link against the archive when compiling
```text
    cc -Wall -Werror -Wextra main libft.a 
```
## Resources

### References
- Linux manual pages (`man <function>`): primary reference for the behavior of the libc functions reimplemented in this project
- The libft subject PDF: for the required prototypes and the additional/bonus functions

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

