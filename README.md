*This project has been created as part of the 42 curriculum by raferrei.*

# Libft

## Description

The **Libft** project consists of creating a custom C library that reimplements a set of standard C library functions, as well as additional utility functions.

The goal of this project is to deepen understanding of:

* Low-level programming in C
* Memory management
* String manipulation
* Code modularity and reusability

This library will be reused in future 42 projects.

---

##  Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate the static library:

```bash
libft.a
```

### Available commands

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

### Usage

Include the header in your project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c -L. -lft
```

---

## 🧩 Library Overview

The library is divided into several categories of functions:

### Character functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_tolower`
* `ft_toupper`

### String functions

* `ft_strlen`
* `ft_strdup`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strncmp`
* `ft_strchr`
* `ft_strrchr`
* `ft_strnstr`
* `ft_strjoin`
* `ft_substr`
* `ft_strtrim`
* `ft_split`

### Memory functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion functions

* `ft_atoi`
* `ft_itoa`

### File descriptor output

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Bonus (Linked list functions)

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## 📚 Resources

### Documentation

* The C Standard Library manual (`man` pages)
* 42 intra subject and guidelines

### Learning resources

* "The C Programming Language" by Brian W. Kernighan and Dennis M. Ritchie
* Online tutorials on memory management and string handling in C

### AI Usage

AI tools (such as ChatGPT) were used for:

* Clarifying concepts related to memory management and pointer usage
* Understanding edge cases in certain functions
* Structuring documentation (README)

All code was written and tested independently.

---
