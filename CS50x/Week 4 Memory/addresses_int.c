#include <stdio.h>

// This program demonstrates the use of pointers in C.
int main(void)
{
    int n = 50;
  
    // Declare a pointer 'p' and assign the address of 'n' to it.
    int *p = &n;

    // Print the value stored at the address pointed to by 'p'.
    printf("%i\n", *p);
}
