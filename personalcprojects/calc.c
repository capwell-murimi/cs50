#include <stdio.h>
#include <cs50.h>

int add_numbers(int num1 , int num2);
int subtract_numbers(int num1 , int num2);

int main(void)
{
    int num1 = get_int("enter first number: ");
    int num2 = get_int("enter second number: ");
    int add = add_numbers(num1 , num2);
    int sub = subtract_numbers(num1 , num2);

    if(num1 > num2)
    {
        subtract_numbers(num1 , num2);
        printf("The difference is %d\n", sub);
    }
    else if(num1 < num2)
    {
        add_numbers(num1 , num2);
        printf("The sum is %d\n", add);
    }
    return 0;
}

int add_numbers(int num1 , int num2)
{
    int sum = num1 + num2;
    return sum;
}

int subtract_numbers(int num1 , int num2)
{
    int diff = num1 - num2;
    return diff;
}
