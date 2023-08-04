#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_recursive(char* s);
int main (void)
{
    char str[] = "Hello, world!";
    string_recursive(str);
}

void string_recursive(char* s)
{

    if (*s == '\0')
    {
    printf("\n");
    return;
    }

    else
    {
        string_recursive(++s);
        printf("%c", *s);
    }
}