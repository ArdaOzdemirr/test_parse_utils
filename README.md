Project Overview:

--> This project was built to test a simple yet critical function in C++: parse_int. The parse_int function takes a string and safely converts it into an integer. It's designed to intelligently handle errors: if the input string isn't a number, is empty, or if the number is too large (causing an overflow), it correctly identifies the issue and handles it gracefully.

--> We've used Google Test, a fantastic testing framework, to thoroughly verify the function's reliability. This project serves as a great example of both implementing a robust parsing function and setting up comprehensive unit tests for it.

Key Features:

--> Safe Number Conversion: It uses std::optional for converting text to numbers, catching errors without "crashing" the program.

--> Comprehensive Testing: We've tested every scenario imaginable! This includes valid numbers, invalid inputs, empty strings, extremely large numbers (overflow), and negative numbers.

--> Google Test Power: We leverage Google Test, one of the coolest and most effective ways to write unit tests for C++ projects.

--> Easy CMake Build: Setting up and building the project is super simple with CMake, ensuring it runs smoothly across different systems.
