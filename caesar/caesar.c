#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
  // this statement outputs an error message in the absence of argv[1]
  if (argc < 2)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }

  // loops over argv[1] and if its an alphabet it prints out the error message and returns 1.
  for (int i = 0; i < strlen(argv[1]); i++)
  {
    if (isalpha(argv[1][i]))
    {
      printf("Usage: ./caesar key\n");
      return 1;
    }
  }

  // checks if the arguments exceed 2
  if (argc > 2)
  {
    printf("Too many arguments\n");
    return 1;
  }

  // converts ascii to interger e.g '2' to 2
  int toDig = atoi(argv[1]) % 26;

  // asks user to input plaintext
  string plaintext = get_string("Plaintext:  ");
  printf("ciphertext: ");

  // iterates over plaintext and calculates plaintext[j] on each iteration
  // if at any point plaintext[j] is uppercase then it subtracts 65(ascii for A) and adds toDig which is the argument.
  // checks the remainder of the answer to 26(number of alphabets) and then adds 65 to print the cipher
  // the same is done when lowercase is encountered but in this case 97(ascii for a) is used.
  // the loop keeps running untill all the letters are converted.
  // ciphertext is printed
  for (int j = 0; j < strlen(plaintext); j++)
  {
    if (isupper(plaintext[j]))
    {
      plaintext[j] = ((plaintext[j] - 65 + toDig) % 26) + 65;
    }
    else if (islower(plaintext[j]))
    {
      plaintext[j] = ((plaintext[j] - 97 + toDig) % 26) + 97;
    }

    printf("%c", plaintext[j]);
  }
  printf("\n");
}
