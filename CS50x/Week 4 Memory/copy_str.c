#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string input for variable s
    char *s = get_string("s: ");

    // Check if the input string s is NULL (an error in getting the input)
    if (s == NULL)
    {
        // Return 1 to indicate an error
        return 1;
    }

    // Allocate memory for a new string t with the same length as s
    char *t = malloc(strlen(s) + 1);

    // Check if the memory allocation was successful
    if (t == NULL)
    {
        // Return 1 to indicate an error in memory allocation
        return 1;
    }

    // Copy the contents of string s to string t
    strcpy(t, s);

    // Check if the length of string t is greater than 0
    if (strlen(t) > 0)
    {
        // Convert the first character of string t to uppercase
        t[0] = toupper(t[0]);
    }

    // Print the original string s
    printf("%s\n", s);

    // Print the modified string t
    printf("%s\n", t);

    // Free the allocated memory for string t
    free(t);

    // Return 0 to indicate successful execution
    return 0;
}
