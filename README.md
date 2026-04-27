*This project has been created as part of the 42 curriculum by falves-e.*

# Libft

## Table of Contents

- [Description](#description)
- [Library Overview](#library-overview)
- [Instructions](#instructions)
- [Resources](#resources)

---

## Description

**Libft** is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate a set of standard C library functions, as well as additional utility functions, to better understand low-level programming concepts such as memory management, string manipulation, and linked lists.

This library also serves as a foundational toolkit that can be reused in future 42 projects, promoting code reusability and modular programming.

The project is divided into multiple parts:
- Reimplementation of standard libc functions
- Additional utility functions
- Linked list manipulation

All functions follow La Norme (42's coding standard) and are compiled with -Wall -Wextra -Werror.

---

## Library Overview

Each function has the prefix `ft_`.

### Part 1 - Libc Functions

Reimplementation of C standard functions.

|  Function  | Description                                           | Return Value 					  |
|:----------:|:------------------------------------------------------|:-----------------------------------|
|`ft_atoi`   | Converts a string to an integer.						 |  Converted integer.			      |
|`ft_bzero`  | Sets a block of memory to zero.						 |  No return value.				  |
|`ft_calloc` | Allocates and zero-initializes memory.				 |  Allocated memory or `NULL`.		  |
|`ft_isalnum`| Checks if a character is alphanumeric.				 |  Returns `1` if true, `0` if false.|
|`ft_isalpha`| Checks if a character is alphabetic.					 |  Returns `1` if true, `0` if false.|
|`ft_isascii`| Checks if a character is within the ASCII range.		 |  Returns `1` if true, `0` if false.|
|`ft_isdigit`| Checks if a character is a digit.					 |  Returns `1` if true, `0` if false.|
|`ft_isprint`  | Checks if a character is printable.				 |  Returns `1` if true, `0` if false.|
|`ft_memchr` | Searches for a byte in memory.						 |  Pointer to found byte or `NULL`.  |
|`ft_memcmp` | Compares two memory areas.							 |  Negative, zero, or positive value.|
|`ft_memcpy` | Copies memory from source to destination.			 |  Returns destination pointer.	  |
|`ft_memmove`| Copies memory safely, handling overlap.      		 |  Returns destination pointer.	  |
|`ft_memset` | Fills memory with a constant byte.                    |  Returns destination pointer.	  |
|`ft_strchr` | Finds the first occurrence of a character in a string.|  Pointer to character or `NULL`.	  |
|`ft_strdup` | Duplicates a string.                                  |  New allocated string or `NULL`.	  |
|`ft_strlcat`| Appends a string with size limit.                     |  Total length of attempted string. |
|`ft_strlcpy`| Copies a string with size limit.                      |  Length of source string.		  |
|`ft_strlen` | Returns the length of a string.                       |  Length of string.				  |
|`ft_strncmp`| Compares two strings up to `n` characters.            |  Comparison result.				  |
|`ft_strnstr`| Locates a substring in a string.                      |  Pointer to substring or `NULL`.	  |
|`ft_strrchr`| Finds the last occurrence of a character.             |  Pointer to character or `NULL`.	  |
|`ft_tolower`| Converts a character to lowercase.                    |  Converted character.			  |
|`ft_toupper`| Converts a character to uppercase.                    |  Converted character.			  |

---

### Part 2 - Additional Functions

Functions not present in libc or implemented differently

| Function      | Description 												 | Return Value					   |
|:-------------:|:-----------------------------------------------------------|:--------------------------------|
|`ft_itoa`      | Converts an integer to a string.							 |  New allocated string or `NULL`.|
|`ft_putchar_fd`| Writes a character to a file descriptor.					 |  No return value.			   |
|`ft_putendl_fd`| Writes a string followed by a newline to a file descriptor.|  No return value.			   |
|`ft_putnbr_fd` | Writes an integer to a file descriptor. 					 |  No return value.			   |
|`ft_putstr_fd` | Writes a string to a file descriptor.						 |  No return value.			   |
|`ft_split`     | Splits a string into an array using a delimiter.			 |  Array of strings or `NULL`.	   |
|`ft_striteri`  | Applies a function to each character (in place).			 |  No return value.			   |
|`ft_strjoin`   | Concatenates two strings into a new one.				  	 |  New allocated string or `NULL`.|
|`ft_strmapi`   | Applies a function to each character (new string).		 |  New allocated string or `NULL`.|
|`ft_strtrim`   | Trims characters from the beginning and end.				 |  New allocated string or `NULL`.|
|`ft_substr`    | Extracts a substring from a string.						 |  New allocated string or `NULL`.|


---

### Part 3 - Linked Lists Functions

Singly linked list manipulation functions

| Function		  | Description								  | Return Value		  |
|:---------------:|:------------------------------------------|:----------------------|
|`ft_lstadd_back` | Adds a node at the end of the list.		  |  No return value.	  |
|`ft_lstadd_front`| Adds a node at the beginning of the list. |  No return value.	  |
|`ft_lstclear`	  | Deletes and frees all nodes.			  |  No return value.	  |
|`ft_lstdelone`	  | Deletes a single node.					  |  No return value.	  |
|`ft_lstiter`	  | Applies a function to each node.		  |  No return value.	  |
|`ft_lstlast`	  | Returns the last node of the list.		  |  Pointer to last node.|
|`ft_lstmap`	  | Creates a new list by applying a function.|  New list or `NULL`.  |
|`ft_lstnew`	  | Creates a new node.						  |  New node or `NULL`.  |
|`ft_lstsize`	  | Counts the number of nodes.				  |  Number of nodes.     |

---

## Instructions

### Compilation

To compile the library, run:

```bash
git clone <repository_url> <project_folder>
cd <project_folder>
make
```

The library `libft.a` is created at the root of the repository.


Include in your *.c files:

```c
#include "libft.h"
```
 
 Compile with:

 ```bash
 cc <your_file.c> -L. -lft -o <your_program>
```
----

### Available Makefile Rules

```bash
make all/make	# Compiles the library
make clean		# Removes object files (.o)
make fclean		# Removes object files (.o) and library file (.a)
make re			# Removes object files (.o) and library file (.a) and rebuilds
```

---

## Resources

### Documentation & Tools

- Manual pages `man`

- [LibftTester by Tripouille](https://github.com/Tripouille/libftTester)

- The C Programming Language - Brian Kernighan & Dennis Ritchie


### AI

- AI tools were used throughout this project to verify behavior of functions, improve documentation structure and also as a search engine.

- This project does not include any code generated by an AI.

- AI was used to help write this readme.
