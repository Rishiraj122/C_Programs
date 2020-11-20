#include<stdio.h>
#include<stdlib.h>

typedef struct minheap{
    int data;
    struct minheap *left;
    struct minheap *right;
}minheap;

minheap *createheap(int value)
{
    minheap* min=(minheap*)malloc(sizeof(minheap));
    min->data=value;
    min->left=min->right=NULL;
    return min;
}

minheap* BST(minheap* min,int data)
{
    if(min==NULL){
        return createheap(data);
    }
    if(data < min->data){
        min->left=BST(min->left,data);
    }
    else if(data>min->data){
        min->right=BST(min->right,data);
    }
    return min;
}

minheap* BST2(minheap* min,int data,int k)
{
    if(min==NULL){
        return createheap(data);
    }
    if(k%2==0){
        min->right=BST2(min->right,data,k);
    }
    else if(k%2!=0){
        min->left=BST2(min->left,data,k);
    }
    return min;
}



void printInorder(minheap* min)
{
    if(min){
        printInorder(min->left);
        printf("%d ", min->data);
        printInorder(min->right);
    }
}

//


int main()
{
    int n,*arr,j=0,k=0;
    minheap* min;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);

    printf("Enter the elements ");
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    min=createheap(arr[0]);

    for(int i=1;i<n;i=i+1){
        BST(min,arr[i]);
    }

    
    printf("\n");
    printInorder(min);
    
return 0;
}