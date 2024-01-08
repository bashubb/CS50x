Lab 6: World Cup Simulator 🌍⚽
==============================

Hey there! This lab is all about simulating the FIFA World Cup using past team ratings. The goal is to estimate each team's chances of winning by running simulations. We'll be working with data from the Men's 2018 World Cup and Women's 2019 World Cup.

Implementation 🛠️
------------------

### Files 📁

-   `tournament.py`: The main script for running the simulations.
-   `2018m.csv`: Team names and ratings for the Men's 2018 World Cup.
-   `2019w.csv`: Team names and ratings for the Women's 2019 World Cup.
-   `answers.txt`: Records the time it takes for different simulation scenarios.

### Implementation Details 

#### Simulating Tournaments 🏆

-   Reads team data from the CSV file and adds it to the program's memory.
-   Runs simulations until only one team is left standing.

#### Game and Round Simulations ⚽🔄

-   Simulates individual games and rounds between teams.

#### Recording Results 📊

-   Keeps track of each team's wins in the `counts` dictionary.
-   Prints the estimated probability of each team winning the World Cup.

Number of Simulations 🔄
------------------------

After making sure everything works, I played around with the number of simulations to find the right balance between accuracy and runtime. The results are in `answers.txt`.

```go

10 tournaments: real  0m0.000s
100 tournaments: real  0m0.000s
1000 tournaments: real0m0.000s
10000 tournaments: real 0m0.000s
100000 tournaments: real 0m0.000s
1000000tournaments: real 0m0.000s

```

Feel free to explore the code and have fun simulating the World Cup! 🎉
