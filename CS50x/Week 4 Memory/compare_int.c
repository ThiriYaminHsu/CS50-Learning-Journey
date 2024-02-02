#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get integer input for variable i and j
    int i = get_int("i: ");
    int j = get_int("j: ");
  
    // Check if i is equal to j
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
