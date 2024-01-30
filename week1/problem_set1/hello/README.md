CS50x Problem Set 1: Hello
======================
Welcome to the first problem set challenge in CS50x! In this assignment, I've created a basic C program that prompts the user for their name and responds with a personalized greeting.

Problem Description: 
-------------
The goal was to use the CS50 Library's `get_string` function to obtain the user's name and then print a friendly greeting using the `printf` function.

Implementation Details:
-------------
The provided `hello.c` file contains the following implementation:

```c

#include <stdio.h>
#include <cs50.h>

int main(void) {


// Take name input from the userstring
name = get_string("What's your name? ");

// Print a personalized greeting
printf("hello, %s\n", name);

// Indicate successful execution
return 0; }`

```

Usage:
-------------

1.  Compile the program using the following command in the terminal:

    ```bash

    make hello

    ```



2.  Run the compiled program:

    ```bash

    ./hello

    ```

3.  Enter your name when prompted, and witness the personalized greeting:

    ```bash

    What's your name?
    Alice
    hello, Alice

    ```

Feel free to use and modify this program as a starting point for more personalized interactions! 🚀
