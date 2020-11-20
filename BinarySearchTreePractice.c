#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree* left;
    struct tree* right;
}tree;

tree* createTree(int value)
{
    tree* bst=(tree*)malloc(sizeof(tree));
    bst->data=value;
    bst->left=bst->right=NULL;
    return bst;
}

tree* insert(tree* bst,int value)
{
    if(bst==NULL)
    {
        bst=createTree(value);
        return bst;
    }
    else if(bst->data<value)
    {
            bst->right=insert(bst->right,value);
    }
    else if(bst->data>value)
    {
        bst->left=insert(bst->left,value);
    }

    return bst;
}

void inorder(tree* bst)
{
    if(bst!=NULL)
    {
        inorder(bst->left);
        printf("%d ",bst->data);
        inorder(bst->right);
    }
}

int main()
{
    tree* node1=createTree(1);
    insert(node1,4);
    insert(node1, 5);
    insert(node1,3);
    insert(node1,9);
    inorder(node1);



return 0;
}