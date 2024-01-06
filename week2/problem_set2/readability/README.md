CS50x Problem Set 2: Readability 📚
===================================

**Welcome** to the second problem set challenge in the CS50x course---Readability. In this problem, I have implemented a program named `readability` that calculates the approximate grade level needed to comprehend a given text. The program utilizes the Coleman-Liau index, which considers the average number of letters and sentences per 100 words in the text.

Background
----------

Understanding the reading level of a text is crucial for tailoring content to a specific audience. The Coleman-Liau index provides a formula to estimate the grade level needed to comprehend a given text based on the average number of letters and sentences per 100 words.

Implementation Details
----------------------

Your program must prompt the user for a string of text using `get_string` and then compute the Coleman-Liau index. Implement functions to count the number of letters, words, and sentences in the text. Finally, calculate the grade level using the Coleman-Liau formula and print the result rounded to the nearest integer.

Sample Output
-------

```bash

$ ./readability Text: Congratulations! Today is your day. You're off to Great Places! You're off and away! Grade 3

```

Specification
-------------

-   Implement the program in a file called `readability.c` in a directory named `readability`.
-   Prompt the user for a string of text using `get_string`.
-   Count the number of letters, words, and sentences in the text.
-   Calculate the Coleman-Liau index and print the corresponding reading grade.
-   If the index is 16 or higher, output "Grade 16+"; if less than 1, output "Before Grade 1".

*Happy coding!* 📖
