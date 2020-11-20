#include<stdio.h>
#include<stdlib.h>
//The Linked list data is being stored inside a Binary Tree
typedef struct Btree
{
    int data;
    struct Btree* left;
    struct Btree* right;
}Btree;

typedef struct list
{
    int data;
    struct list* next;
}list;

list* createlist(int ele)
{
    list* nd=(list*)malloc(sizeof(list));
    nd->data=ele;
    nd->next=NULL;
    return nd;
}

void listInsert(list *temp,int x)
{
    if(temp==NULL)
        temp=createlist(x);
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        list* temp2=(list*)malloc(sizeof(list));
        temp2->data=x;
        temp2->next=temp->next;
        temp->next=temp2;
        temp=temp->next;    
    }
}

Btree* createTree(int value)
{
    Btree* tree=(Btree*)malloc(sizeof(Btree));
    tree->data=value;
    tree->left=NULL;
    tree->right=NULL;
    return tree;
}


Btree* insert(Btree* tree,int key)
{
    if(tree==NULL)
    {
        tree=createTree(key);
        return tree;
    }
    else if(tree->data<key)
    {
        tree->right=insert(tree->right,key);
    }
    else if(tree->data>key)
    {
        tree->left=insert(tree->left,key);
    }

    return tree;
}

void inorder(Btree* tree)
{
    if(tree==NULL)
    {
        
    }
    else
    {
        inorder(tree->left);
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}

void listTraversal(list* node)
{
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node=node->next;
    }
}


int main()
{
    int x,n;
    int* arr=(int*)malloc(sizeof(int));
    Btree* tree=NULL;
    list* list;
    printf("Enter the number of elements you wanna insert in the list to be inserted in the BInary Tree\n");
    scanf("%d",&n);
    printf("Now, enter those elements\n");
    for(int i=0;i<n;i=i+1)
    {
        scanf("%d",&x);
        if(i==0)
        {
            list=createlist(x);
        }
        else
        {
            listInsert(list,x);
        }
    }
    
    for(int i=0;i<n;i=i+1)
    {
        arr[i]=list->data;
        list=list->next;
    }

    for(int i=0;i<n;i=i+1)
    {
        if(i==0)
        {
            tree=insert(tree,arr[i]);
        }
        else
        {
            insert(tree,arr[i]);
        }
        
    }
    inorder(tree);


return 0;
}