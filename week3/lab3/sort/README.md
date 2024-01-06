CS50x Lab 3: Sort 📚
====================

Welcome to the third lab challenge in the CS50x course---Lab 3: Sort! In this lab, I've analyzed three sorting programs to determine which sorting algorithms they use.

Background 🤔
-------------

Recall from the lectures that there are various sorting algorithms, such as selection sort, bubble sort, and merge sort. Each algorithm has its own approach to sorting a sequence of numbers.


Instructions 📝
---------------

In this lab, I was given three compiled C programs: sort1, sort2, and sort3. My task was to determine which sorting algorithm each program implements.

The programs are binary files, so I didn't have access to the source code. To assess the algorithm used by each file, I ran them on different lists of values provided in .txt files.

For instance, to sort reversed10000.txt with sort1, I ran `./sort1 reversed10000.txt`. I also timed my sorts using `time ./sort1 reversed10000.txt` to measure the elapsed time.

I recorded my findings and explanations in answers.txt. Here's an example of how I structured my answers:

-   sort1 uses: bubble sort

    -   How do I know?: I compared sorting times for random10000 and sorted10000, and they are not equal.
-   sort2 uses: merge sort

    -   How do I know?: I tested sort2 and sort3 on reversed50000, and sort2 is faster.
-   sort3 uses: selection sort

    -   How do I know?: The sorting time for reversed50000 and sorted50000 is the same, but slower compared to using sort2.

Results 📊
----------

Here are my findings:

-   **sort1:** bubble sort
-   **sort2:** merge sort
-   **sort3:** selection sort

I arrived at these conclusions based on my observations and timing experiments.

*Happy sorting!* 🔄⏱️
