#include<stdio.h>
#include<stdlib.h>

int k=0;

typedef struct stack
{
    int data[20];
    int top;
    int capacity;
}stack;

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<=high;j=j+1){
        if(arr[j]<pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high)
{
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

stack* createStack(int value)
{
    stack* s=(stack*)malloc(sizeof(stack));
    s->capacity=value;
    s->top=-1;
    return s;
}

int isStackfull(stack* s)
{
    return s->top==s->capacity-1;
}

int isStackempty(stack* s)
{
    return s->top==-1;
}

void push(stack* s,int value)
{
    if(isStackfull(s)){

    }
    else{
        s->data[++(s->top)]=value;
    }
}

int pop(stack* s)
{
    if(isStackempty(s)){
        return 0;
    }
    else{
        return s->data[s->top--];
    }
}

int sum(int* arr,int left,int right,int add,stack* s)
{
    if(left>right){
        k++;
        push(s,add);
        return 0;
    }

    sum(arr,left+1,right,add+arr[left],s);

    sum(arr,left+1,right,add,s);
}



int main()
{
    int n,*arr,testcases,x,*b;

    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        x=23*n;
        stack* s=createStack(x);
        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*x);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        sum(arr,0,n-1,0,s);

        for(int i=0;i<k;i=i+1){
            b[i]=pop(s);
        }

        quickSort(b,0,k-1);

        for(int i=0;i<k;i=i+1){
            printf("%d ",b[i]);
        }

        printf("\n");
        k=0;
    }

return 0;
}