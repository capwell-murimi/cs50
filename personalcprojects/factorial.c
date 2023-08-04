#include <stdio.h>
#include <cs50.h>

int factorial(int n);
int main (void)
{
    int n = get_int("How many factorials ? ");
    int ans = factorial(n);
    printf("Ans : %d \n", ans);
}

int factorial(int n)
{
    int s = 0;

    if (n == 0)
    return 2;

    s = n * factorial(n - 1);
    return s;
}