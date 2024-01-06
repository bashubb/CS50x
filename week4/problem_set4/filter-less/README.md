CS50x Problem Set 4: Filter 🖼️
===============================

In this fourth problem set of CS50x, I delved into the captivating realm of image manipulation, harnessing the power of BMP files and applying a palette of filters to craft visually compelling images.

Learning Goals 🚀
-----------------

The primary objective was to deepen my understanding of image representation and manipulation. The focus was on BMP files, pixel values, and the application of captivating filters.

Background: Understanding Bitmaps 🌈
------------------------------------

The bedrock of this problem set lies in the concept of bitmaps, where images are represented as grids of pixels. For 24-bit color BMP files, each pixel contains values for red, green, and blue, allowing for a rich palette of colors. Headers like BITMAPINFOHEADER and BITMAPFILEHEADER provide metadata about the image.

Filters Applied 🎨
------------------

The challenge involved implementing four enchanting filters:

1.  **Grayscale:** Transforming the image into a black-and-white masterpiece by adjusting pixel values based on brightness.

2.  **Sepia:** Infusing a touch of vintage charm by recalculating red, green, and blue values using a sepia algorithm.

3.  **Reflection:** Casting a horizontal reflection, creating a mirrored effect.

4.  **Blur:** Applying a mystical box blur to soften the image by averaging neighboring pixel values.

Code Exploration 
-----------------------

The implementation involved a dance with `helpers.c`, where functions like `grayscale`, `sepia`, `reflect`, and `blur` were elegantly crafted to apply the respective filters.

Conclusion 🌟
-------------

Completing this problem set marked not just the end of a challenge but a milestone in my journey of pixel manipulation, BMP file structures, and the artistry of implementing captivating filters. The skills acquired set the foundation for further exploration in the enchanting realm of image processing.
