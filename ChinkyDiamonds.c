#include<stdio.h>
#include<stdlib.h>

int swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

typedef struct queue
{
    int data[200];
    int front;
    int rear;
    int capacity;
}queue;

queue* createqueue(int value)
{
    queue* node=(queue*)malloc(sizeof(queue));
    node->capacity=value;
    node->front=0;
    node->rear=-1;
}

int isqueuefull(queue* node)
{
    return node->rear==node->capacity-1;
}

int isqueueempty(queue* node)
{
    return  node->front==node->rear+1;
}

void insert(queue* node, int element)
{
    if(isqueuefull(node)){

    }
    else{
        node->data[++(node->rear)]=element;
    }
    
}

int deletee(queue* node)
{
    if(isqueueempty(node)){
    
    }
    else{
        int temp;
        temp=node->data[node->front];
        node->data[node->front]=node->data[node->front++];
        return temp;
    }
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

void reverse(queue* node,queue* rev,int n){
    for(int i=0;i<n;i=i+1){
        insert(rev,node->data[node->rear--]);
    } 
}

int main()
{
    int n,k,*arr,Diamonds=0,testcase=0,val,onebytwo;
    scanf("%d",&testcase);
    
    while(testcase>0){

        scanf("%d%d",&n,&k);
        queue* node=createqueue(n);
        queue* node2=createqueue(n);

        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,n-1);

        for(int i=0;i<n;i=i+1){
            insert(node,arr[i]);
        }

        reverse(node,node2,n);
        for(int i=0;i<3;i=i+1){
            onebytwo=deletee(node2);
            Diamonds=Diamonds+onebytwo;
            onebytwo=onebytwo/2;
            
        }
        printf("%d ",deletee(node));
        

    


        Diamonds=0;
        testcase=testcase-1;
    }


    

return 0;
}