// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace(string str);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Write correct arguments\n");
        return 1;
    }
    else
    {
        string word = argv[1];
        printf("%s\n", replace(word));
    }
}

string replace(string str)
{
    //loop that iterates over the string.
    //a string is an array of characters.
    //it changes a vowels a e i o to numbers 6 3 1 0 respectively
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
            case 'a':
                str[i] = '6';
                break;
            case 'e':
                str[i] = '3';
                break;
            case 'i':
                str[i] = '1';
                break;
            case 'o':
                str[i] = '0';
                break;
            default:
                break;
        }
    }
    return str;
}