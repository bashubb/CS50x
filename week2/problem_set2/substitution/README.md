CS50x Problem Set 2: Substitution 🌐
====================================

**Welcome** to the second problem set challenge in the CS50x course---Substitution. In this problem, you'll implement a program named `substitution` that encrypts messages using a substitution cipher. The program allows users to provide a key, a mapping of each letter of the alphabet to another letter.

Background 📚
-------------

In a substitution cipher, messages are encrypted by replacing each letter with another letter based on a key. The key is a mapping of each alphabet letter to the corresponding letter when encrypting. For instance, if the key is "NQXPOMAFTRHLZGECYJIUWSKDVB," then A becomes N, B becomes Q, and so on.

Implementation Details 🛠️
--------------------------

Your program should enable users to encrypt messages by providing a command-line argument as the key. The program will then prompt the user for the plaintext and output the corresponding ciphertext.

Example 🚀
----------

```bash

$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO plaintext: HELLO ciphertext: EHBBQ

```

```bash

$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI plaintext: hello, world ciphertext: jrssb, ybwsp

```

Usage 🧑‍💻
-----------

-   Execute the program with a valid key as a command-line argument.
-   The program prompts the user for the plaintext.
-   Output the corresponding ciphertext.

Error Handling ❌
----------------

-   If the user doesn't provide a valid key (not 26 characters), the program displays an error message: "Key must contain 26 characters."
-   If the user provides an invalid command-line argument or no argument at all, the program reminds them how to use the program: "Usage: ./substitution key."

*Happy encrypting!* 📜🔐
