# C Pointers: Unexpected Value Modification

This repository demonstrates a common error in C programming related to the misuse of pointers.  The original code attempts to modify a variable's value using a pointer, but it produces incorrect or unexpected results due to pointer-related issues. The solution addresses the problem and explains the cause and resolution.

## Bug Description
The bug lies in how the pointer `ptr` interacts with the variable `x`.  The code intends to change the value of `x` to 20 using pointer dereferencing. However, depending on the context and how `ptr` was initialized and used, it may lead to problems like segmentation faults, unexpected results, or memory leaks. 

## Solution
The solution ensures correct usage of pointers by verifying that `ptr` points to a valid memory location before modifying the value using dereferencing.