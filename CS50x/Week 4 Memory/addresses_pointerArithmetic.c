#include <stdio.h>

int main(void)
{
    char *s = "HI!";

    // Print the character at the memory location pointed to by 's'.
    printf("%c", *s);

    // Print the character at the next memory location ('s + 1').
    printf("%c", *(s + 1));
    
    // Print the character at the next memory location ('s + 2').
    printf("%c\n", *(s + 2));
}

