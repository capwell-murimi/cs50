#include    <stdio.h>
#include    <stdlib.h>

int main(void)
{
    int *numbers    =   malloc(3*sizeof(int));

    if(numbers   ==  NULL)
    {
        return  1;
    }

    numbers[0]  =   1;
    numbers[1]  =   2;
    numbers[2]  =   3;


    int *ptr    =   realloc(numbers,5*sizeof(int));

    if(ptr  ==  NULL)
    {
        free(numbers);
        return  1;
    }
    numbers =   ptr;
    ptr[3]  =   4;
    ptr[4]  =   5;

    for(int i   =   0;  i   <   numbers[i];  i++)
    {
        printf("%d\n",    numbers[i]);
    }
    free(numbers);
}