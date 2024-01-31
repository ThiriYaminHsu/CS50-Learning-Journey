#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    // Print the string value stored at the memory address pointed to by 's'
    printf("%s\n", s);
}

/*
   Explanation:
   - char *s = "HI!"; Declare a character pointer 's' and initialize it with the memory address of the string literal "HI!".
   - In C, a string literal is represented as an array of characters,
     and a character pointer (char *) can be used to point to the memory location where the string is stored.
   - printf("%s\n", s); Print the string value stored at the memory address pointed to by 's'.
*/
