#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0.
*/
void    resetto98(int *n);
int main(void)
{
int n;

n = 402;
printf("n=%d\n", n);
resetto98(&n);
printf("n=%d\n", n);
return (0);
}

void    resetto98(int   *n)
{
    *n  =   98;
}