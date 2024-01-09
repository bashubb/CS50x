CS50x Problem Set 6: Mario (Less)
=====================================

Overview
--------

This is my solution for the CS50x Problem Set 6 - Mario (Less). The program, `mario.py`, generates a half-pyramid of a specified height using hashes (#) for blocks. The user is prompted to enter the height, a positive integer between 1 and 8, inclusive. The program handles invalid inputs by re-prompting until a valid input is provided.

Example Output
--------------

### Input: Height = 4

```bash

$ python mario.py
Height: 4
   #
  ##
 ###
####
```

### Input: Height = 8

```bash

$ python mario.py
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

Implementation
--------------

### Prompt for Height

-   Utilizes `get_int` to prompt the user for the half-pyramid's height.
-   Ensures the user provides a positive integer between 1 and 8, inclusive.
-   Reprompts the user if the input is invalid.

### Generate Pyramid

-   Uses loops and print statements to generate the desired half-pyramid.
-   Aligns the bottom-left corner of the pyramid with the left-hand edge of the terminal.
-   Avoids extra spaces at the end of each line.

Usage
-----

Execute the program by running the following command:

bashCopy code

`$ python mario.py`

Follow the prompts to enter the desired height, and the program will generate the corresponding half-pyramid.

Feel free to reach out if you have any questions or suggestions! 🚀
