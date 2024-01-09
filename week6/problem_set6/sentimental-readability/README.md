CS50x Problem Set 6: Readability  🌟
=======================================

Overview
--------

This is my solution for the CS50x Problem Set 6 - Readability. The program, `readability.py`, computes the approximate grade level needed to comprehend a given text using the Coleman-Liau formula. The user is prompted to enter the text, and the program outputs the corresponding grade level.

Example Output
--------------


```bash

$ python readability.py
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

Implementation
--------------

### Prompt for Text

-   Utilizes `get_string` to prompt the user for input text.

### Compute Coleman-Liau Index

-   Calculates the average number of letters, words, and sentences per 100 words in the text.
-   Applies the Coleman-Liau formula: `0.0588 * L - 0.296 * S - 15.8`.
-   Rounds the result to the nearest integer.

### Output Grade Level

-   Prints the computed grade level rounded to the nearest integer.
-   Handles special cases such as "Grade 16+" and "Before Grade 1" according to specified conditions.

Usage
-----

Execute the program by running the following command:

bashCopy code

`$ python readability.py`

Follow the prompts to enter the desired text, and the program will output the corresponding grade level.

Testing
-------

While check50 is available for this problem, you're encouraged to first test your code on your own using the provided test cases.

Feel free to reach out if you have any questions or suggestions! 🚀
