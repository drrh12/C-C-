#include <stdio.h>

int main(){
    int num = 27;
    printf("%d\n", num);
    return 0;
}

//FORMAT SPECIFIERS

// To output variables in C, you must get familiar with something called "format specifiers".

/*Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. 
It is basically a placeholder for the variable value. 

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, 
you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:
*/

