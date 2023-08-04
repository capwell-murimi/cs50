#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //promt user to enter name
    string name = get_string("what's your name? ");

    //print name
    printf("Hello, %s\n", name);
}