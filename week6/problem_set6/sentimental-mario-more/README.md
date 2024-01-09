
CS50x Problem Set 6: Mario (More) 🌟
========================================

Overview
--------

This is my solution for the CS50x Problem Set 6 - Mario (More). The program, `mario.py`, generates double half-pyramids of a specified height using hashes (#) for blocks. The user is prompted to enter the height, a positive integer between 1 and 8, inclusive. The program handles invalid inputs by re-prompting until a valid input is provided.

Example Output
--------------

### Input: Height = 4

```bash

$ python mario.py
Height: 4
   # #
  ## ##
 ### ###
#### ####
```

### Input: Height = 8

```bash

$ python mario.py
Height: 8
       # #
      ## ##
     ### ###
    #### ####
   ##### #####
  ###### ######
 ####### #######
######## ########
```

Implementation
--------------

### Prompt for Height

-   Utilizes `get_int` to prompt the user for the half-pyramids' height.
-   Ensures the user provides a positive integer between 1 and 8, inclusive.
-   Reprompts the user if the input is invalid.

### Generate Double Pyramid

-   Uses loops and print statements to generate the desired double half-pyramids.
-   Aligns the bottom-left corner of the pyramids with the left-hand edge of the terminal.
-   Ensures there are two spaces between the two pyramids and no additional spaces after the last set of hashes on each row.

Usage
-----

Execute the program by running the following command:

bashCopy code

`$ python mario.py`

Follow the prompts to enter the desired height, and the program will generate the corresponding double half-pyramids.

Feel free to reach out if you have any questions or suggestions! 🚀
