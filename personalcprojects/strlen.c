#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int    _strlen(char *s);
int main(void)
{
char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}

int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}
/*int    _strlen(char *s)
{
    int i   =   0;
    while   (s  !=  (void *)0)
    {
        i++;
    }
    return  i;
}*/