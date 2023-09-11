#include <stdio.h>
#include <stdlib.h>
// We can create a dynamic array in C by using the following methods:



int main(){
// Using malloc() Function

// Dynamic Array Input and Sum:

// Prompt the user for the number of elements they want to input.
// Allocate memory dynamically for an integer array of the specified size.
// Take input from the user for each element.
// Calculate the sum of the elements.
// Display the sum.
// Finally, don't forget to free the allocated memory.
// Hint: You can use a loop to take input for the elements and another loop or the same loop to calculate the sum.
    int i, sum = 0, siz, *arr;

    printf("digite o tamanho do array: ");
    scanf("%d", &siz);

    arr = malloc(siz * (sizeof(int)));

    if (arr != NULL) {
        printf("allocated: ");

        for(i=0; i<siz; ++i){
            *(arr + i) = i;
        }

        for(i=0; i<siz; ++i){
            printf("%d ", arr[i]);
        }

        //calculate the sum of all elements 
        for(i=0; i<siz; ++i){
            sum += arr[i];
        }
        
        printf("\nSum: %d", sum);

        //dynamicaly invert the array order
        

    } else if (arr == NULL) {
        printf("failed");
    }

    free(arr);

    return 0;

// Reverse a Dynamic String:

// Prompt the user for a string input.
// Determine the length of the input string.
// Allocate memory dynamically for a character array (string) of the same size + 1 (for the null terminator).
// Copy the original string into this new dynamically allocated memory but in reverse order.
// Print out the reversed string.
// Don't forget to free the allocated memory.
// Hint: You can use string functions like strlen to find out the length. Use a loop to iterate from the end of the original string to the start and populate the new string.

// Find the Maximum in a Dynamic Array:

// Ask the user for the number of elements they want to input.
// Allocate memory dynamically for an integer array of the specified size.
// Take input from the user for each element.
// Find the maximum value from the entered elements.
// Display the maximum value.
// Finally, release the allocated memory.
// Hint: Initialize a variable to store the maximum value. As you iterate through the array, update this variable whenever you find a larger number.

// Concatenate Two Dynamic Strings:

// Prompt the user for two string inputs.
// Determine the lengths of both strings.
// Allocate memory dynamically for a character array (string) of size length1 + length2 + 1 (combined length of both strings + 1 for the null terminator).
// Copy both strings into this new dynamically allocated memory, one after the other.
// Print out the concatenated string.
// Free the memory.
// Hint: You can use strcpy and strcat functions, or use loops to copy and concatenate strings.

// Using calloc() Function
// Resizing Array Using realloc() Function
// Using Variable Length Arrays(VLAs)
// Using Flexible Array Members
}
