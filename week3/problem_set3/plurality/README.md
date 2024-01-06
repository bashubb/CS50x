CS50x Problem Set 3: Plurality 🗳️
==================================

Hello fellow learners! 🌟 I've just completed the third problem set challenge in the CS50x course, and I'm excited to share my implementation for the Plurality program. Let me walk you through what I've accomplished!

Background 🤔
-------------

In this problem set, we delved into the concept of plurality voting---a straightforward method where each voter can choose one candidate, and the candidate with the most votes wins.

Understanding 📖
----------------

Looking into the provided `plurality.c`, I successfully implemented the missing parts of the code to simulate a plurality vote election. The program handles command-line arguments, collects votes from users, and determines the winner based on the votes cast.

Specification 📋
----------------

Here's a breakdown of my implementation:

### Vote Function:

-   The `vote` function takes a string argument (`name`) representing the candidate voted for.
-   If `name` matches a candidate, their vote count is updated, and the function returns true for a successful ballot.
-   If `name` doesn't match any candidate, it returns false for an invalid ballot.

### Print Winner Function:

-   The `print_winner` function prints out the name(s) of the candidate(s) with the most votes.
-   In case of a tie, it outputs the names of each winning candidate on separate lines.

Usage 🚦
--------

My program operates as expected, as demonstrated in the usage examples:

```bash

$ ./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Bob
Vote: Alice
Alice

$ ./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Charlie
Invalid vote.
Vote: Alice
Alice

$ ./plurality Alice Bob Charlie
Number of voters: 5
Vote: Alice
Vote: Charlie
Vote: Bob
Vote: Bob
Vote: Alice
Alice Bob

```

I'm thrilled about successfully completing this challenge! 🚀👏 If you're working on this too, keep going---you've got this! 
