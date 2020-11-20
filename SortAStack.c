#include<stdio.h>
#include<stdlib.h>

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

typedef struct stack
{
    int data[20];
    int top;
    int capacity;
}stack;

stack* createStack(int value)
{
    stack* s=(stack*)malloc(sizeof(stack));
    s->capacity=value;
    s->top=-1;
    return s;
}

int isStackFull(stack* s)
{
    return s->top==s->capacity-1;
}

int isStackEmpty(stack* s)
{
    return s->top==-1;
}

void Push(stack* s,int value)
{
    if(isStackFull(s)){

        printf("The Stack Is Full");
    
    }
    else{
        s->data[++(s->top)]=value;
    }
}

int pop(stack* s)
{
    if(isStackEmpty(s)){

        printf("The Stack Is Empty");

    }
    else{
        return s->data[s->top--];
    }
}

int main()
{
    int n,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }

    quickSort(arr,0,n-1);

    stack* s=createStack(n);
    
    for(int i=0;i<n;i=i+1){
        Push(s,arr[i]);
    }

    for(int i=0;i<n;i=i+1){
        printf("%d ",pop(s));
    }

return 0;
}