CS50x Lab 5: Inheritance
========================

Overview
--------

Welcome to the gene playground! In this CS50x lab, we dive into the fascinating world of blood type inheritance. I've successfully completed this challenge, and here's a quick rundown for your portfolio.

Description
-----------

The `inheritance.c` script simulates blood type inheritance within a family. Each member inherits blood type alleles from their parents, creating a genetic family tree. 🧬✨

Usage
-----

1.  Navigate to the `inheritance` directory.
2.  Execute `make` to compile the code.
3.  Run `./inheritance` to witness the genetic drama unfold. 🚀

Sample Output
-------------

Here's a sneak peek into the family tree drama:

```bash

$ ./inheritance
Child (Generation 0): blood type OO
  Parent (Generation 1): blood type AO
    Grandparent (Generation 2): blood type OA
    Grandparent (Generation 2): blood type BO
  Parent (Generation 1): blood type OB
    Grandparent (Generation 2): blood type AO
    Grandparent (Generation 2): blood type BO

```

Implementation Details
----------------------

The `create_family` function takes an integer representing the number of generations and allocates memory for each family member. It sets up alleles, parents, and forms a comprehensive family tree. The `free_family` function deallocates the memory, ensuring a clean exit. 🧑‍💻🌳

Acknowledgment
--------------

This completion signifies the successful simulation of blood type inheritance within a family tree. Explore the code, understand the logic, and enjoy the elegance of genetic algorithms!

Happy coding! 🚀🧬✨
