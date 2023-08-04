#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    //prompt the user to input height
    do
    {
        n = get_int("Enter Height: ");
    }
    while (n < 1 || n > 8);

    //The first loop prints the rows
    for (int i = 0; i < n; i++)
    {
        // this prints out the spaces
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        //this prints out the hashes right-alligned(column) 
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}