# CS50x Lab 2: Scrabble

## Overview

🎯 Welcome to the second lab set challenge in the CS50x course—Scrabble. In this lab, you will implement a program that determines the winner of a short Scrabble-like game. Players will input their words, and the player with the higher score wins.

## Background

🔤 In the game of Scrabble, players score points based on the letters in their words. Each letter has a specific point value, and the total score is the sum of these values.

## Implementation Details

🛠️ Referencing your course materials, complete the implementation of `scrabble.c`. The program should compute the score for each player's word using an array called POINTS, where each letter has a specific point value.

1. Implement the `compute_score()` function, which calculates and returns the score for a given word.
2. Utilize the `isupper()` and `islower()` functions to handle uppercase and lowercase letters uniformly.
3. The main function prompts players for their words, calculates their scores, and declares the winner.

## Output

```bash
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie! 

$ ./scrabble
Player 1: Oh,
Player 2: hai!
Player 2 wins! 

$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins! 

$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins! 
```
