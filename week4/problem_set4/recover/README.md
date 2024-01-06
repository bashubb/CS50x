CS50x Problem Set 4: Recover 📷
===============================

In the exciting realm of CS50x, I conquered the challenge of recovering precious JPEGs from a forensic image, 'card.raw'. Inadvertently losing a trove of campus photos spurred this mission.

Background 
-----------------

The captivating world of JPEG recovery unfolded as we explored the intricacies of JPEG file signatures. Recognizing the distinct pattern of the first three bytes (0xff 0xd8 0xff) and the fourth byte's characteristics, we discerned the key to identifying the beginning of each JPEG.

Digital cameras store photos contiguously on memory cards, leaving traces of signatures that signal the start and end of each image. A memory card, initialized with a FAT file system, writes data in 512-byte blocks, leading to potential slack space where remnants of data may reside.

Strategy 
-----------

To navigate through this digital labyrinth, I crafted a program named 'recover.c'. It traverses a copy of 'card.raw', identifying JPEG signatures and extracting them block by block. The efficient handling of 512-byte buffers and block-aligned signatures ensured the accurate recovery of JPEGs.

Implementation 🚀
-----------------

In the 'recover.c' file, meticulous coding led to the creation of a program that takes the forensic image as a command-line argument, iterates through its bytes, and extracts JPEGs, meticulously naming them with three-digit decimal numbers.

Usage and Results 📊
--------------------

Executing the program with the command `./recover card.raw` successfully recovered 50 JPEGs from the forensic image. Each JPEG was named with a three-digit decimal number, preserving the chronological order of their recovery.

This adventure did not start without a guide. To embark on your own journey, log into cs50.dev, navigate to the terminal, and execute the provided commands to download and set up the project environment.

Conclusion 🌟
-------------

Completing this challenge not only fortified my understanding of file formats and data recovery techniques but also provided a hands-on experience in navigating binary data. The successful recovery of JPEGs demonstrated the application of theoretical concepts to real-world scenarios, marking another milestone in the CS50x journey.
