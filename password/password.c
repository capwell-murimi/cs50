#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}


bool valid(string password)
{
    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_number = false;
    bool has_symbol = false;
    for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))
        {
            has_uppercase = true;
        }
        else if (islower(password[i]))
        {
            has_lowercase = true;
        }
        else if (isdigit(password[i]))
        {
            has_number = true;
        }
        else if (ispunct(password[i]))
        {
            has_symbol = true;
        }

    }
    return has_uppercase && has_lowercase && has_number && has_symbol;
}
