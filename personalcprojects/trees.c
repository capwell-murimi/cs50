#include    <stdio.h>
#include    <stdlib.h>

typedef struct  node
{
    int number;
    struct  node    *left;
    struct  node    *right;
}
node;

node  *createNode(int  number)
{
    node    *newNode    =   malloc(sizeof(node));
    newNode->number   =   number;
    newNode->left   =   NULL;
    newNode->right  =   NULL;

    return  newNode;
}

void    insertNode(node **root,  int number)
{
    if (*root == NULL) {
        *root = createNode(number);
        return;
    }

    if (number < (*root)->number) {
        insertNode(&((*root)->left), number);
    } else if (number > (*root)->number) {
        insertNode(&((*root)->right), number);
    }
}
void    inorder(node    *root)
{
    if(root ==  NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d \n",    root->number);
    inorder(root->right);
}

int main() {
  node *root = NULL;
  insertNode(&root, 10);
  insertNode(&root, 5);
  insertNode(&root, 15);
  insertNode(&root, 2);
  insertNode(&root, 7);
  insertNode(&root, 12);

  inorder(root);
  printf("\n");

  return 0;
}


bool    search(node *root,  int number)
{
    void insertNode(struct Node *root, int data)
    {
        if (root == NULL)
        {
            return  false;
        }
        if (data < root->data)
        {
            return  insertNode(root->left, data);
        }
        else if
        {
            insertNode(root->right, data);
        }
        else
        {
            return  true;
        }
    }
}