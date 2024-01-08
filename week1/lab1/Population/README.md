CS50x Lab 1: Population Growth 
========================================

Hello fellow coders! 👋 Here's my solution to CS50x Lab 1 - Population Growth. If you've landed here, you're in for a llama-sized treat! 🦙✨

Problem Overview: 
=========================
In this lab, the task was to calculate the number of years it takes for a population of llamas to grow from a given starting size to a specified ending size. The scenario involves llamas being born and passing away annually, with the goal of determining when the population hits the desired target. 📊🦙

Implementation Highlights:
===========================
The solution is encapsulated in the `population.c` file. The program prompts users for the starting and ending population sizes, ensuring they meet specific conditions. A robust loop structure handles re-prompting until valid inputs are received. The crux lies in calculating the number of years required for the llama population to reach the desired size, and the program joyfully prints this result to the terminal. 🖥️💡

Usage:
=======
To witness the llama magic, compile with `make population` and execute `./population`. Input starting and ending population sizes, and voila! The program unveils the number of years needed for the llama utopia. Feel free to test it with various scenarios for a delightful experience. 🚀🎉

Example Testing:
=================

```bash

$ ./population
Start size: 1200
End size: 1300
Years: 1

$ ./population
Start size: -5
Start size: 3
Start size: 9
End size: 5
End size: 18
Years: 8
$ ./population
Start size: 20
End size: 1
End size: 10
End size: 100
Years: 20

$ ./population
Start size: 100
End size: 1000000
Years: 115

```

Feel free to explore the code, tweak it, and let the llama population thrive under your coding expertise! 🚩✨ Happy coding!
