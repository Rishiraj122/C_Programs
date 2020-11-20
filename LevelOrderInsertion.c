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
    tree* t=(tree*)malloc(sizeof(tree));
    t->data=value;
    t->left=t->right=NULL;
    return t;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void inOrder(tree* t)
{
    if(t!=NULL){
        inOrder(t->left);
        printf("%d ",t->data);
        inOrder(t->right);
    }
}

void preOrder(tree* t)
{
    if(t!=NULL){
        preOrder(t->left);
        preOrder(t->right);
        printf("%d ",t->data);
    }
}

void diagonalSum(tree* t)
{
    tree* temp=t;
    tree* temp2=t;
    int sum=0,sum2=0;
    while(temp){
        sum=sum+temp->data;
        temp=temp->right;
    }

    temp=t;
    temp=temp->right->left->data;
    while(temp){
        sum2=sum2+temp;
        temp=temp->left;
    }
    

    printf("The Right Sum is %d ",sum);
}

tree* insertLevelOrder(int arr[],int n,int i,tree* t)
{
    if(i<n){
        tree* temp=createTree(arr[i]);
        t=temp;
        t->left=insertLevelOrder(arr,n,i*2+1,t->left);
        t->right=insertLevelOrder(arr,n,i*2+2,t->right);
    }

    return t;
}

int main()
{

    int n;
    scanf("%d",&n);//Note DOwn The Number of Elements
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);//Note The Elements
    }

    tree* t=insertLevelOrder(arr,n,0,t);

    diagonalSum(t);


return 0;
}