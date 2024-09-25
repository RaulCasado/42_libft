42 Libft Project
================

The **Libft** project is the first major projects at 42. In this project, you will build your own C library by re-implementing functions from the C standard library, as well as additional useful functions.

Project Overview
-------------------

The goal of Libft is to improve your understanding of the C programming language by implementing common standard library functions from 0. This project will give you the opportunity to understand how these low-level functions work , improving your overall programming skills and knowledge of C.

Part 1: Standard C Library Functions
----------------------------------------

In the first part, you'll recreate several essential standard C library functions, such as:

*   `ft_memset`
*   `ft_bzero`
*   `ft_memcpy`
*   `ft_memmove`
*   `ft_strlen`
*   `ft_strchr`
*   `ft_strncmp`
*   `ft_atoi`
*   ...and many more

The goal is to ensure you understand how to handle strings efficiently. You will also learn about void pointers and more advanced concepts.

Part 2: Additional Useful Functions
--------------------------------------

In the second part, you will add more custom utility functions that could be helpful in future projects. These include:

*   `ft_substr`
*   `ft_strjoin`
*   `ft_strtrim`
*   `ft_split`
*   `ft_itoa`
*   `ft_strmapi`
*   `ft_putchar_fd`
*   `ft_putstr_fd`
*   ...and others

These functions are designed to provide more flexibility when working with strings, memory allocation, and file descriptors.

Bonus: Linked List Functions
-------------------------------

Once you finish the mandatory parts, you'll be challenged to implement a set of linked list functions as a bonus part:

*   `ft_lstnew`
*   `ft_lstadd_front`
*   `ft_lstsize`
*   `ft_lstlast`
*   `ft_lstadd_back`
*   `ft_lstdelone`
*   `ft_lstclear`
*   `ft_lstiter`
*   `ft_lstmap`

Working with linked lists helps solidify your understanding of data structures and memory management.

How to Compile the Library
-----------------------------

Once you've implemented all the functions, you can compile your library using the following command:

    make

This will create the `libft.a` file, which is your static library containing all your implemented functions.

Testing the Library
----------------------

To test your library, you can write a `main.c` file that calls your functions. For example:

    #include "libft.h"
    #include <stdio.h>
    
    int main() {
        char str[] = "Hello, World!";
        printf("Length of string: %zu\n", ft_strlen(str));
        return 0;
    }

Compile and link it with your library:

    gcc main.c -L. -lft -o test_program

Run your program:

    ./test_program

You can also use external testers like [francinette](https://github.com/xicodomingues/francinette)

Final Thoughts
-----------------

The **Libft** project is a foundational step in your 42 journey. By mastering the implementation of these standard functions, you'll gain a deep understanding of C programming, memory management, and low-level operations. This project prepares you for more complex future projects that will require efficiency and mastery of C.

Take your time, test thoroughly, and enjoy the process!