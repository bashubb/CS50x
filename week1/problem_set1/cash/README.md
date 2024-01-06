# CS50x Problem Set 1: Cash 💰

## Overview

Welcome to the first problem set challenge in the CS50x course—Cash. In this problem set, we'll explore the implementation of a program that efficiently determines the minimum number of coins needed to make change using greedy algorithms. The goal is to minimize the number of coins dispensed when returning change to a customer.

## Problem Description

The objective of this challenge is to prompt the user for the amount of change owed to a customer and print the smallest number of coins required to make that change. Utilizing greedy algorithms, the program needs to decide which coins to dispense, considering quarters (25¢), dimes (10¢, nickels (5¢), and pennies (1¢).

## Greedy Algorithms 🤑

When making change, the goal is to minimize the number of coins dispensed. Greedy algorithms come to the rescue by providing efficient solutions to such optimization problems.

## Implementation Details

In the provided `cash.c` file, the program is partially implemented. Your task is to complete the functions:
- `get_cents`: Prompts the user for the number of cents owed, handling negative inputs.
- `calculate_quarters`, `calculate_dimes`, `calculate_nickels`, `calculate_pennies`: Calculate the number of respective coins to be given.


## Sample Output

```bash
$ ./cash
Change owed: 41
4

$ ./cash
Change owed: -41
Change owed: foo
Change owed: 41
4
```

