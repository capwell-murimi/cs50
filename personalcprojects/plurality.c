#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[MAX];

int candidate_count;

bool count_votes(string name);
void print_winner(void);

int main (int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Error");
        return 2;
    }

    candidate_count = argc - 1;

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voters = get_int("How many voters? ");

    for (int i = 0; i < voters; i++)
    {
        string name = get_string("vote: ");

        if (!count_votes(name))
        {
            printf("invalid vote");
        }
    }

    print_winner();
}

bool count_votes(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name , name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner()
{
    int max_vote = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_vote)
        {
            max_vote = candidates[i].votes;
        }
    }

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_vote)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}