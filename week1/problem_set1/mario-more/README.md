#  CS50x Problem Set 1: Mario (More)

##  Overview

Welcome to the second part of the CS50x course's problem set 1, known as "Mario (More Comfortable)." In this challenge, we're delving deeper into the realm of C programming to recreate the classic pyramids from Nintendo's Super Mario Brothers. The objective is to construct adjacent pyramids in text, using hashes (#) for bricks, with the height of the pyramids determined by user input.

## Problem Description

In this challenge, your program, named `mario`, will construct adjacent pyramids based on user input. Users will be prompted to enter a positive integer between 1 and 8, inclusive, determining the height of the pyramids. The program should then generate the pyramids using hashes (#) with a gap between them.

## 🌈 Example Usage

Here's a glimpse of how the program might work with different user inputs:

```bash
$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

$ ./mario
Height: 2
 #  #
##  ##

$ ./mario
Height: 1
#  #

```
If users input values outside the specified range or non-integer inputs, the program will prompt them until a valid input is provided.

## 💻 Implementation

To tackle this problem, open your mario.c file and implement the solution as described in the problem set. Pay attention to the gap width between adjacent pyramids, equal to the width of two hashes, irrespective of the pyramid heights.

Happy coding, and enjoy the challenge of creating Mario's pyramids in C! 🚀

