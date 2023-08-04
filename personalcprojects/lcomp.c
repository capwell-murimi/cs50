#include    <stdio.h>
#include    <stdlib.h>
struct  node*   add_to_node(struct  node    *ptr,   int data);
struct  node
{
    int data;
    struct  node    *next;
};

int main    (void)
{
    struct  node    *head   =   malloc(sizeof(struct    node));
    head->data  =   45;
    head->next  =   NULL;
    printf("%i\n",  head->data);
    
    struct  node    *ptr    =   head;
    ptr =   add_to_node(ptr ,   98);
    ptr =   add_to_node(ptr ,   3);
}
struct  node*   add_to_node(struct  node    *ptr,   int data)
{
    struct  node    *temp   =   malloc(sizeof(struct    node));
    temp->data  =   data;
    temp->next  =       NULL;

    printf("%d\n",    temp->data);
    ptr->next   =   temp;
    return  temp;
}
