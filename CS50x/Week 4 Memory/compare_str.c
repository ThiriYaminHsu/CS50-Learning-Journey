#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string input for variable s
    char *s = get_string("s: ");
    // Get another string input for variable t
    char *t = get_string("t: ");

    // Compare the strings s and t using strcmp
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
