#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left, *right;
}tree;

tree* createTree(int value)
{
    tree* node=(tree*)malloc(sizeof(tree));
    node->data=value;
    node->left=node->right=NULL;
    return node;
}

void inorder(tree* nd)
{
    if(nd!=NULL)
    {
        inorder(nd->left);
        printf("%d ",nd->data);
        inorder(nd->right);
    }
}

void postorder(tree* nd)
{
    if(nd!=NULL)
    {
        postorder(nd->left);
        postorder(nd->right);
        printf("%d ",nd->data);
    }
}

void preorder(tree* nd)
{
    if(nd!=NULL)
    {
        printf("%d ",nd->data);
        preorder(nd->left);
        preorder(nd->right);
    }
}

int main()
{
    int count=0,count2=1;
    tree* node1=createTree(4);
    node1->left=createTree(1);
    node1->right=createTree(3);
    node1->right->left=createTree(5);
    node1->right->left->left=createTree(789);
    node1->right->right=createTree(9);
    tree* node2=node1;
    tree* node3=node1;
    while(node2->left)
    {
        node2=node2->left;
        count=count+1;
    }
    node3=node3->right;
    while(node3->left)
    {
        node3=node3->left;
        count2=count2+1;
    }
    if(count2>count)
    {
        printf("%d ",node3->data);
    }
    else
    {
        printf("%d ",node2->data);
    }
    

return 0;
}