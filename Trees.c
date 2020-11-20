#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}tree;

tree* createTree(int value)
{
    tree* ntree=(tree*)malloc(sizeof(tree));
    ntree->data=value;
    ntree->left=ntree->right=NULL;
    return ntree;
}

void printPreorder(tree* tree)
{
    if(!tree){

    }
    else{
        printf("%d ",tree->data);
        printPreorder(tree->left);
        printPreorder(tree->right);
    }
}

void printInorder(tree* tree)
{
    if(!tree){

    }
    else{
        printInorder(tree->left);
        printf("%d ",tree->data);
        printInorder(tree->right);
    }
}

void printPostorder(tree* tree)
{
    if(!tree){

    }
    else{
        printPostorder(tree->left);
        printPostorder(tree->right);
        printf("%d ",tree->data);

    }
}

int main()
{
    tree* tree=createTree(32);
    tree->left=createTree(44);
    tree->right=createTree(51);
    tree->left->right=createTree(77);
    printInorder(tree);

return 0;
}


