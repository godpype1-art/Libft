*This project has been created as part of the 42 curriculum by falves-e.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate a set of standard C library functions, as well as additional utility functions, to better understand low-level programming concepts such as memory management, string manipulation, and linked lists.

This library serves as a foundational toolkit that can be reused in future 42 projects, promoting code reusability and modular programming.

The project is divided into multiple parts:
- Reimplementation of standard libc functions
- Additional utility functions
- Bonus part (linked list manipulation)

---

## Features

- Rewritten standard C library functions (`libc`)
- Memory handling utilities
- String manipulation functions
- Character checks and conversions
- File descriptor output functions
- Singly linked list implementation (bonus)

---

## Library Overview

### Libc Functions

Reimplementation of standard functions such as:
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

### String Functions

- `ft_strlen`
- `ft_strdup`
- `ft_strcpy` / `ft_strlcpy`
- `ft_strcat` / `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`

### Character Functions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Conversion Functions

- `ft_atoi`
- `ft_itoa`

### Memory Allocation

- `ft_calloc`

### File Descriptor Output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Additional Utility Functions

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Bonus: Linked List Functions

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
