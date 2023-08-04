#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

//user inputs the message
//the first for loop iterates over the string's characters
//the char value is stored inside quotient
//the second loop converts the value to binary
//the third loop prints binary in reverse
int main(void)
{
    string word = get_string("Message: ");

    for (int i = 0; i < strlen(word); i++)
    {
        unsigned char decimal = word[i];
        int binary[BITS_IN_BYTE];
        int quotient = decimal;
        int remainder;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            remainder = quotient % 2;
            binary[j] = remainder;
            quotient = quotient / 2;

        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }

        printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
