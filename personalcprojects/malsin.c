#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *link;
} node;

node *head = NULL;
node *current = NULL;

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *newNode = malloc(sizeof(node));
        newNode->number = number;
        newNode->link = NULL;

        if (head == NULL)
        {
            head = newNode;
            current = newNode;
        }
        else
        {
            current->link = newNode;
            current = newNode;
        }
    }

    current = head;
    while (current != NULL)
    {
        printf("%d\n", current->number);
        current = current->link;
    }

    return 0;
}
