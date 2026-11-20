*This project has been created as part of the 42 curriculum by alsadyko.*
# GET_NEXT_LINE

## Description

`get_next_line` is a function that reads a file descriptor **one line at a time**.
Each call returns the next line (including the terminating `\n`, if there is one),
or `NULL` when there is nothing left to read or an error occurs.

```c
char *get_next_line(int fd);
```

The goal of the project is to learn about **static variables**, dynamic memory
management and reading from file descriptors with a fixed buffer size.

### How it works

1. **`read_to_stash`** – calls `read()` in chunks of `BUFFER_SIZE` bytes and appends
   them to a static *stash* until a `\n` is found or EOF is reached.
2. **`extract_line`** – copies everything up to and including the first `\n` from the
   stash into a newly allocated string (the line returned to the caller).
3. **`trim_stash`** – removes the returned line from the stash, keeping the leftover
   bytes for the next call.

The stash is a `static char *`, so the leftover data persists between calls.
On EOF or error, the stash is freed and `NULL` is returned.

### Functions and their prototypes

#### `get_next_line.c`

```c
char	*get_next_line(int fd);
```
The main function. It checks that `fd` and `BUFFER_SIZE` are valid, fills the stash
with `read_to_stash`, takes the next line out with `extract_line` and keeps the rest
with `trim_stash`. It returns the line, or `NULL` on EOF, error or an invalid `fd`.

```c
static char	*read_to_stash(int fd, char *stash);
```
Allocates a buffer of `BUFFER_SIZE + 1` bytes and keeps calling `read()`, joining each
chunk onto the stash, until the stash has a `\n` or `read()` returns 0 (EOF).
It returns the updated stash. If `read()` or `malloc` fails, it frees the stash and
returns `NULL`.

```c
static char	*extract_line(char *stash);
```
Finds the end of the first line in the stash (just after the `\n`, or the end of the
string if there is no `\n`) and returns a newly allocated copy of that line.

```c
static char	*trim_stash(char *stash);
```
Removes the first line from the stash. It returns a new string with whatever comes
after the `\n` and frees the old stash. If there is no `\n` (nothing left over), it
frees the stash and returns `NULL`.

#### `get_next_line_utils.c`

```c
size_t	nextline_strlen(const char *s);
```
Returns the length of `s`, or 0 if `s` is `NULL`.

```c
char	*nextline_strchr(const char *s, int c);
```
Returns a pointer to the first `c` in `s`, or `NULL` if it isn't found or `s` is `NULL`.
Searching for `'\0'` returns a pointer to the end of the string.

```c
char	*nextline_substr(char const *s, unsigned int start, size_t len);
```
Returns a newly allocated substring of `s` that starts at index `start` and is at most
`len` characters long. If `start` is past the end of `s`, it returns an empty string.
It returns `NULL` if `s` is `NULL` or `malloc` fails.

```c
char	*nextline_strjoin(char *s1, char const *s2);
```
Returns a newly allocated string with `s2` added to the end of `s1`, and **frees `s1`**.
If `s1` is `NULL`, it returns a copy of `s2`. If `malloc` fails, it frees `s1` and
returns `NULL`.

## Library Contents

| File | Content |
|------|---------|
| `get_next_line.c` | `get_next_line` and its static helpers (`read_to_stash`, `extract_line`, `trim_stash`) |
| `get_next_line_utils.c` | String helpers: `nextline_strlen`, `nextline_strchr`, `nextline_substr`, `nextline_strjoin` |
| `get_next_line.h` | Prototypes, includes and the default `BUFFER_SIZE` (42) |
| `*_bonus.c / *_bonus.h` | Bonus version, handling multiple file descriptors at once |

## Instructions

### Compilation

The buffer size can be set at compile time with `-D BUFFER_SIZE=n`
(defaults to 42 if not defined):

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

### Usage

```c
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
        int             fd;
        char    *line;
        // Alternative: read a fixed file instead of a command-line argument.
        // Change the prototype to main(void), uncomment the open() below,
        // and remove the if/else block.
        // fd = open("file.txt", O_RDONLY);
        if (argc > 1)
                fd = open(argv[argc - 1], O_RDONLY);
        else
                fd = 0;
        while ((line = get_next_line(fd)) != NULL)
        {
                printf("%s", line);
                free(line);
        }
        if (fd > 0)
                close(fd);
        return (0);
}
```

> [!WARNING]
> Every returned line is heap-allocated and **must be freed by the caller**.

### Testing

Try different buffer sizes (`1`, `42`, `10000000`) and check for leaks:

```sh
valgrind --leak-check=full ./a.out
```

## Resources

- `man 2 read`, `man 3 malloc`
- [Static variables in C](https://en.wikipedia.org/wiki/Static_variable)
- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)

### AI usage

AI was used as a learning tool during this project, mainly to:

- Gain a deeper understanding of new concepts, especially how to handle buffers
  (reading in fixed-size chunks, null-terminating them, and carrying leftover data
  between calls) and how file descriptors work with `read()`.
- Understand how `static` variables keep their value between function calls, and how
  that makes the stash possible.
- Think through edge cases: EOF without a trailing `\n`, `read()` errors, invalid file
  descriptors, very small or very large `BUFFER_SIZE` values, and avoiding memory leaks.
- Help draft and structure this README.

All code was written by the author. Every explanation was checked by testing it and
reading the man pages.
