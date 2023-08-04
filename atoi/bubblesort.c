#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

void convert();
typedef struct
{
    string name;
    int number;
}
person;
int main (void)
{
    person arr[3];

    arr[0].name = "James";
    arr[0].number = 2;

    arr[1].name = "Jane";
    arr[1].number = 3;

    arr[2].name = "Tom";
    arr[2].number = 1;

    for (int i = 0; i < 2; i++)
    {
        int breaker = 0;
        for (int j = 0; j < 3 - 1 - i; j++)
        {
            if (arr[j].number > arr[j + 1].number)
            {
                person temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                breaker = 1;
            }
        }
        if (breaker == 0)
        {
            break; 
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name:%s Number:%d", arr[i].name, arr[i].number);
        printf("\n");
    }
}