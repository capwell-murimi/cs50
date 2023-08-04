#include <stdio.h>

int strln(char *str);

int main(void)
{
    char str[] = "Hello world";
    int leng = strln(str);
    printf("The length of the string is %i\n", leng);
}

int strln(char* str)
{
    int init = 0;
    if (*str == '\0')
    {
        return (0);
    }
    else
    {
        return (1 + strln(++str));
    }
}