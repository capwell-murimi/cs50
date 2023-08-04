#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, k, l;
    int n;

    //to prompt user to enter height if they enter non-reqired height
    do
    {
        n = get_int("Enter height: ");
    }
    while (n < 1 || n > 8);

    //iterates  rows
    for (i = 0; i < n; i++)
    {
        //iterates the columns.
        //the first loop prints out spaces.
        //the second loop prints out the hashes of the first pyramid.
        //2 spaces are then printed.
        //third loop prints the second pyramid and a line is skipped after running through all the loops.
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");

        for (l = 0; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}