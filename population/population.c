#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int yr = 0;
    //user inputs the entry size
    int ans1;
    do
    {
        ans1 = get_int("Entry size: ");
    }
    while (ans1 < 9);

    //user inputs the end  size
    int ans2;
    do
    {
        ans2 = get_int("Final size: ");
    }
    while (ans2 < ans1);

    // calculates total number of years

    while (ans1 < ans2)
    {
        int add = ans1 / 3;
        int sub = ans1 / 4;
        ans1 += add - sub;
        yr++;
    }

    printf("Years: %d\n", yr);
}
