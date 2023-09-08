#include <stdio.h>
// Pointer Basics: Swapping two integers using pointers:

// Write a function that takes two integer pointers as arguments and swaps the values they point to.
// Test the function in main().
// Pointer Arithmetic: Array Sum:

// Steps:
// Declare two integer variables with initial values.
// Create two pointers and assign the addresses of the two integer variables to them.
// Write a function that takes two integer pointers as arguments.
// Within the function, declare a temporary integer variable.
// Use the temporary integer to hold the value of the first pointer, then assign the value of the second pointer to the first, and finally, assign the value held in the temporary variable to the second pointer.
// In the main(), call the function and then print the values of the two integers to ensure they were swapped.

// Write a function that computes the sum of an integer array using pointer arithmetic instead of array indexing.
// The function should take an integer pointer (the array) and the size of the array as arguments.
// Test the function in main().
// Dynamic Memory: Array Reversal:

// Steps:
// Declare an integer array and initialize it with some values.
// Write a function to compute the sum of elements.
// In the function, initialize a sum variable to 0.
// Use a pointer to traverse the array (from start to end) and keep adding the value pointed by the pointer to the sum.
// Once the end of the array is reached, return the sum.
// Call the function from main() and print the result.

// Allocate memory for an integer array using malloc().
// Fill the array with values from 1 to N.
// Write a function that reverses this array in-place using pointers.
// Remember to free the allocated memory using free() after you're done.
// Test the function in main().
// String Manipulation: String Length:

// Steps:
// Use malloc() to allocate memory for an integer array of size N.
// Fill the allocated memory with integers from 1 to N.
// Write a function that takes the allocated array and its size as parameters.
// Use two pointers: one starting at the beginning of the array and the other at the end.
// Swap the integers at the locations pointed to by the two pointers.
// Increment the first pointer and decrement the second pointer and continue the process until the two pointers meet or cross each other.
// In main(), print the array after reversing to verify.
// Free the dynamically allocated memory.

// Write a function that computes the length of a string using a pointer. Do not use the standard strlen() function.
// The function should take a char pointer (the string) as an argument.
// Test the function in main() with various strings.
// Function Pointers: Apply Operation:

// Steps:
// Declare and initialize a character array (string).
// Write a function to compute the string length.
// Initialize a counter to 0.
// Use a pointer to traverse the string, incrementing the counter for each character, until the null terminator ('\0') is encountered.
// Return the counter value.
// Call the function from main() and print the result.

// Write a function apply() that takes three arguments: two integers and a pointer to a function.
// The function being pointed to should take two integers as arguments and return an integer (e.g., a function that multiplies two integers).
// The apply() function should use the function pointer to apply the operation to the two integer arguments and return the result.
// Test the function in main() with various operations (e.g., addition, subtraction). 

// Steps:
// Declare two functions that take two integers as parameters and return an integer, e.g., add() and multiply().
// Write a function named apply() which accepts two integer values and a pointer to a function (from the previous step) as parameters.
// Within apply(), call the passed function using the function pointer, passing the two integer values as arguments.
// Return the result of the function call.
// In main(), use the apply() function with different operations and print the results.