#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int employees = 1;
    while (employees <= 20)
    {
       int  hourly_rate = get_int("Hourly rate: ");
       int hrs = get_int("Hours: ");
       int pay = (hourly_rate * hrs) + 1250;
        printf("Employee %d : %d\n", employees , pay);
        employees++;
    }
}