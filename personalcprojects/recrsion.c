#include <stdio.h>
#include <cs50.h>

int add(int n);
int main (void)
{
    int ans;
    int n = get_int("How many do you want ? :\n");
    ans = add(n);
    printf("%d\n", ans);
}

int add(int n)
{
    int s = 0;

    if (n == 0)
    return n;

    s = n + add(n - 1);
    return s;
}