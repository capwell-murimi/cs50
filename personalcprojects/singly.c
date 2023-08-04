#include <stdio.h>
#include    <stdlib.h>

struct  node
{
    int data;
    struct  node    *next;
};

int main(void)
{
    struct  node    *head   =      malloc(sizeof(struct    node));
    head->data  =   45;
    head->next  =   NULL;

    struct  node    *current    =   malloc(sizeof(struct    node));
    current->data   =   98;
    current->next   =   NULL;
    head->next  =   current;

    current =   malloc(sizeof(struct    node));
    current->data   =   3;
    current->next   =   NULL;
    head->next->next    =   current;

    current =   malloc(sizeof(struct    node));
    current->data   =   10;
    current->next   =   NULL;
    head->next->next->next    =   current;



    printf("%i\n",    head);
    return  0;
}

void    addtoend(struct node    *head,  int data)
{
    struct  node    *ptr    *temp;
    ptr =   head;
    temp    =   malloc(sizeof(struct    node));

    temp->data =   data;
    temp->next  =   NULL;

    while(ptr->next !=   NULL)
    {
        ptr =   ptr->next;
    }

    ptr->next   =   temp;
}