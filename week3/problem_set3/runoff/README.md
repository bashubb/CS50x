CS50x Problem Set 3: Runoff Election 🗳️
========================================

Hello CS50x enthusiasts! 🌟 I'm thrilled to share my solution for the third problem set challenge in the CS50x course---Runoff Election. Let me walk you through the fascinating world of ranked-choice voting systems!

Background 
-------------

We're all familiar with the simplicity of plurality elections---where the candidate with the most votes wins. However, in scenarios with multiple candidates, ties and potential drawbacks arise. Enter ranked-choice voting systems, allowing voters to rank candidates in order of preference. The goal is to determine a winner that better aligns with the overall voter preferences.

Instant Runoff System 
------------------------

The program I've implemented simulates an "instant runoff" election, a form of ranked-choice voting. If no candidate receives more than 50% of the first-preference votes, the candidate with the fewest votes is eliminated. The votes for the eliminated candidate are transferred to the voters' next preference, and the process repeats until a candidate secures a majority.

Handling Corner Cases 
------------------------

I've considered potential corner cases, such as ties for elimination. In case of a tie for the last place, all candidates tied for last are eliminated. However, if all remaining candidates have an equal number of votes, preventing the elimination of everyone is crucial, ensuring a tie is declared between the remaining candidates.

Implementation 🛠️
------------------

The program navigates through the complexities of ranked-choice voting, taking into account the preferences expressed by voters. It strives to find a candidate who not only has significant support but also aligns closely with the majority of voters' preferences.

Conclusion 🚀
-------------

While ranked-choice voting systems might seem more intricate than plurality votes, they offer a nuanced approach to elections, aiming to better represent the diverse preferences of the voters. This problem set has been an exciting journey into the world of election algorithms, and I'm eager to see how my solution performs in various scenarios.

Happy coding and may the best candidate win! 🎉🗳️
