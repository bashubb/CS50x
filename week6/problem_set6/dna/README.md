DNA Profiler 🔬🧬
=================

Introduction 🌐
---------------

Hey there! This program is all about DNA profiling and identifying individuals based on their DNA sequences. By analyzing Short Tandem Repeats (STRs), we can match DNA sequences to individuals in a DNA database.

Implementation 🛠️
------------------

### Files 📁

-   `dna.py`: The main script for DNA profiling.
-   `databases/`: Folder containing CSV files with STR counts for individuals.
-   `sequences/`: Folder containing text files with DNA sequences to identify.

How to Use 🚀
-------------

1.  **Clone the Repository:** Make sure to clone the repository to your local machine.

    ```bash

    git clone <repository_url>
    ```

2.  **Navigate to the DNA Folder:**

    ```bash

    cd dna
    ```

3.  **Run the DNA Profiler:**

    ```bash

    python dna.py databases/large.csv sequences/5.txt
    ```

    If you provide the incorrect number of arguments, the program will guide you:

    ```bash

    python dna.py Usage: python dna.py data.csv sequence.txt
    ```

Results 📊
----------

After running the program, you'll get the name of the individual to whom the DNA most likely belongs. For example:

```bash

$ python dna.py databases/large.csv sequences/5.txt Lavender
```
If there's no match, the program will print:


```bash

No match
```

Feel free to explore the code and understand how DNA profiling works! If you have any questions, let me know. Happy coding! 🧬🚀
