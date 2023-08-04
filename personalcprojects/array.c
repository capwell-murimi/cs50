#include <stdio.h>
#include <cs50.h>

int total_score(int score[] , int n);
int main(void)

{
    int n = get_int("Enter number of weeks: \n");
    int week[n];
    int sum = 0;

    for(int i  = 0; i < n; i++)
    {
        week[i] = get_int("week %d :", i);

    }
    printf("%d\n", total_score(week, n));
}

int total_score(int score[] , int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        total = total + score[i];
    }
    return total;
}