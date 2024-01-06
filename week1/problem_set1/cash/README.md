CS50x Problem Set 1: Cash 💰
============================

Overview
--------

Hello, fellow learners! 🚀 I'm excited to share my experience with the first problem set challenge in the CS50x course---Cash. This problem set delves into the world of programming by exploring how to efficiently determine the minimum number of coins needed to make change using greedy algorithms. The main goal is to minimize the number of coins when giving change back to a customer.

Problem Description
-------------------

The challenge revolves around prompting the user for the amount of change owed and printing the smallest number of coins required to make that change. Greedy algorithms, including quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢), come into play in deciding which coins to dispense.

Greedy Algorithms 
--------------------

Greedy algorithms prove to be valuable in solving optimization problems like making change. They provide efficient solutions by making locally optimal choices at each step.

Implementation Journey
----------------------

I'm thrilled to share that I've successfully completed this challenge! The main tasks included implementing functions such as `get_cents`, which prompts the user for the amount of cents owed while handling negative inputs, and functions like `calculate_quarters`, `calculate_dimes`, `calculate_nickels`, and `calculate_pennies` to determine the optimal number of each coin to be dispensed.

Sample Output
-------------

Here's a glimpse of the program in action:

```bash

$ ./cash Change owed: 41
4

$ ./cash Change owed: -41
Change owed: foo
Change owed: 41
4

```

The program handles various scenarios gracefully, ensuring a seamless user experience.

I'm eager to tackle more challenges and continue learning in this exciting CS50x journey! 🚀💻
