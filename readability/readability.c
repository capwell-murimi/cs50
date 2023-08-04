#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int count_all(string text);

//user inputs text.
//text is calculated for grade by calling the funtion int count_all()
//grade is printed.
int main(void)
{
    string text = get_string("Text: ");
    int index = count_all(text);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

//this funtion will return the value of index which is the grade \.
//word_count is initialized by 1 to cater for the last word
//a loop iterates over the string counting the words, letters, and sentences.
//the sub index is calculated. it will return a float.
//the number is rounded off to the nearest interger by the round() function and the value is stored in the interger index
//index is returned
int count_all(string text)
{
    int word_count = 1;
    int letter_count = 0;
    int sentence_count = 0;
    int i;
    int x = strlen(text);
    for (i = 0; i < x; i++)
    {
        if (isspace(text[i]))
        {
            word_count++;
        }

        else if (isalpha(text[i]))
        {
            letter_count++;
        }
        else if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentence_count++;
        }
    }
    float l = ((float)letter_count) / word_count * 100;
    float s = ((float)sentence_count) / word_count * 100;
    float subindex = 0.0588 * l - 0.296 * s - 15.8;
    int index = round(subindex);
    return index;
}