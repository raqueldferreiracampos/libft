*This project has been created as part of the 42 curriculum by raferrei.*

# libft

## Description

**libft** is a custom C library built from scratch as part of the 42 school curriculum. The goal of the project is to reimplement a carefully selected subset of the standard C library (`libc`), along with a set of additional utility functions that are not part of the standard but are useful enough to carry across future projects.

By rebuilding these functions from the ground up — without calling the originals — the project deepens understanding of low-level C programming: how strings are laid out in memory, how dynamic allocation works, how linked lists are built and traversed, and how to write correct, portable code with no undefined behaviour.

The resulting static library (`libft.a`) serves as a personal toolbox that is reused and extended throughout the 42 cursus.

---

## Library Overview

The library is organised into five categories.

### Character classification & conversion

`ft_isalpha` | Returns non-zero if `c` is an alphabetic character.
`ft_isdigit` | Returns non-zero if `c` is a decimal digit.
`ft_isalnum` | Returns non-zero if `c` is alphanumeric.
`ft_isascii` | Returns non-zero if `c` falls in the ASCII range (0–127).
`ft_isprint` | Returns non-zero if `c` is a printable character.
`ft_tolower` | Converts an uppercase letter to its lowercase equivalent.
`ft_toupper` | Converts a lowercase letter to its uppercase equivalent.

### String manipulation

`ft_strlen` | Returns the number of bytes in a null-terminated string.
`ft_strdup` | Allocates and returns a duplicate of a string.
`ft_strlcpy` | Size-bounded copy of a string; always null-terminates the destination.
`ft_strlcat` | Size-bounded concatenation; always null-terminates the result.
`ft_strncmp` | Compares at most `n` bytes of two strings.
`ft_strchr` | Locates the first occurrence of `c` in a string.
`ft_strrchr` | Locates the last occurrence of `c` in a string.
`ft_strnstr` | Locates `needle` in `haystack`, searching at most `len` bytes.
`ft_strjoin` | Allocates and returns the concatenation of two strings.
`ft_substr` | Allocates and returns a substring of a string.
`ft_strtrim` | Allocates a copy of a string with leading/trailing characters from a set removed.
`ft_split` | Splits a string by a delimiter character and returns a null-terminated array of strings.
`ft_strmapi` | Applies a function to each character of a string, building a new string from the results.
`ft_striteri` | Applies a function in-place to each character of a string, passing the index and a pointer to the character.

### Memory management

`ft_memset` | Fills `n` bytes of a memory area with a constant byte.
`ft_bzero` | Zeroes `n` bytes of a memory area.
`ft_memcpy` | Copies `n` bytes from `src` to `dst` (non-overlapping regions).
`ft_memmove` | Copies `n` bytes from `src` to `dst`, handling overlap correctly.
`ft_memchr` | Scans `n` bytes of a memory area for the first occurrence of a byte value.
`ft_memcmp` | Compares `n` bytes of two memory areas.
`ft_calloc` | Allocates memory for an array of `count` elements of `size` bytes each, zeroing the allocation.

### Conversion

`ft_atoi` | Converts the initial portion of a string to an `int`, mimicking the behaviour of `atoi`.
`ft_itoa` | Allocates and returns a string representing the integer `n`.

### Output to file descriptors

`ft_putchar_fd` | Writes the character `c` to the given file descriptor.
`ft_putstr_fd` | Writes the string `s` to the given file descriptor.
`ft_putendl_fd` | Writes the string `s` followed by a newline to the given file descriptor.
`ft_putnbr_fd` | Writes the integer `n`, formatted as a decimal string, to the given file descriptor.

### Linked list operations

Introduces a singly linked list type (`t_list`) with the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

`ft_lstnew` | Allocates and returns a new list node whose `content` is set to the given pointer.
`ft_lstadd_front` | Adds a node at the beginning of the list.
`ft_lstadd_back` | Adds a node at the end of the list.
`ft_lstsize` | Returns the number of nodes in the list.
`ft_lstlast` | Returns the last node of the list.
`ft_lstdelone` | Frees a single node using the supplied `del` function, then frees the node itself.
`ft_lstclear` | Deletes and frees every node in the list, setting the pointer to `NULL`.
`ft_lstiter` | Iterates over the list, applying a function to the `content` of each node.
`ft_lstmap` | Iterates over the list, applies a function to each `content`, and builds a new list from the results; uses `del` to handle allocation failures cleanly.

---

## Instructions

### Requirements

- A C compiler (e.g. `gcc` or `clang`)
- GNU `make`
- A Unix-like environment (Linux or macOS)

### Compilation

Clone the repository and compile the library:

```bash
git clone https://github.com/raqueldferreiracampos/libft.git
cd libft
make
```

This produces the static archive `libft.a` in the project root.

To also compile the bonus linked-list functions, run:

```bash
make bonus
```

### Available Makefile targets

`make` | Compiles all mandatory source files into `libft.a`.
`make clean` | Removes all compiled object files (`.o`).
`make fclean` | Removes object files and the `libft.a` archive.
`make re` | Runs `fclean` then recompiles everything from scratch.

### Using the library in your project

Copy (or symlink) `libft.a` and `libft.h` into your project, include the header, and link against the archive at compile time:

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft -o my_program
```

---

## Resources

### Reference documentation

- `man` pages;

### Tutorials & articles

- <https://www.youtube.com/watch?v=N6dOwBde7-M>
- <https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/>

### AI usage

Claude, CHATGPT and Gemini were used during this project for the following tasks:

- Concept clarification.
- Reviewing behaviour of standard functions.
- Discuss possibel strategies.

All C code was written and tested by the author. AI was not used to generate, complete, or debug any file.
