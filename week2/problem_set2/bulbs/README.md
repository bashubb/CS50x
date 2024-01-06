CS50x Problem Set 2: Bulbs 🌟
=============================

**Welcome** to the second problem set challenge in the CS50x course---Bulbs. In this challenge, we'll explore the concept of encoding messages into binary using light bulbs. The task is to write a program named `bulbs` that converts a given message into instructions for a strip of bulbs, where each character is represented by an 8-bit binary number. 💡

Not-So-Broken Light Bulbs
-------------------------

In this exercise, we take inspiration from a binary-encoded message displayed on a stage of light bulbs. 💬 The process involves converting a text message into decimal numbers using ASCII encoding and then further translating those decimals into 8-bit binary representations. The resulting binary instructions are interpreted as on (1) and off (0) states for the light bulbs.

Output
-------

Here's an example of how the completed program might work:

```bash 

$ ./bulbs Message: HI!
⚫🟡⚫⚫🟡⚫⚫⚫
⚫🟡⚫⚫🟡⚫⚫🟡
⚫⚫🟡⚫⚫⚫⚫🟡
```

Each bulb represents a 0 (off) or 1 (on), and the binary sequence is printed for each character in the message. 


*Happy coding!* 🌈
