#include <stdio.h>

// This program demonstrates the use of pointers in C.
int main(void)
{
    // We start by declaring an integer variable 'n' and assigning it the value 50.
    int n = 50;
  
    // Now, let's introduce a pointer called 'p'. A pointer is a variable that stores the memory address of another variable.
    // Here, we're declaring a pointer 'p' and assigning it the address of our integer variable 'n' using the '&' (address-of) operator.
    int *p = &n;

    // We use the pointer 'p' to access the value stored at the memory address it points to.
    // This is done with the '*' (dereference) operator. So, when we print '*p', we're printing the value stored at the address pointed to by 'p'.
    printf("%i\n", *p);
}
