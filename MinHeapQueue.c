#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

typedef struct queue
{
    int data[20];
    int capacity;
    int front;
    int rear;
}queue;

queue* createqueue(int value)
{
    queue* minheap=(queue*)malloc(sizeof(queue));
    minheap->capacity=value;
    minheap->front=0;
    minheap->rear=-1;
    return minheap;
}

int isfull(queue* minheap)
{
    return minheap->rear==minheap->capacity-1;
}

int isempty(queue* minheap)
{
    return minheap->front==minheap->rear+1;
}

void insert(queue* minheap,int value)
{
    if(!isfull(minheap)){
        minheap->data[++(minheap->rear)]=value;
    }
}

int deletee(queue* minheap)
{
    if(!isempty(minheap)){
        int temp;
        temp=minheap->data[minheap->front];
        minheap->data[minheap->front]=minheap->data[minheap->front++];
        return temp;
    }
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;

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
        int p=partition(arr,0,high);
        quickSort(arr,0,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    queue* minheap=createqueue(77);
    int n,x,size=0,*arr,initial,j=0;
    char a[3];

    printf("Enter the Number of TestCases\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);

    while(j<n){

        printf("Enter p to insert, pp to delete, t to get the first eelement\n");
        scanf("%s",&a);
        if(strcmp(a,"p")==0){
            printf("Enter the Value\n");
            scanf("%d",&x);
            insert(minheap,x);
            arr[size]=x;
            quickSort(arr,0,size);
            size=size+1;
            printf("The Size of the List is %d\n",size);
        }

        else if(strcmp(a,"t")==0){
            if(size==0){
                printf("-1\n");
            }
            else{
                printf("The Top Element of the List is %d\n",arr[0]);
            }
        }

        else if(strcmp(a,"pp")==0){
            deletee(minheap);
            size=size-1;
            printf("The Size of the List is %d\n",size);
            
            for(int i=0;i<size;i=i+1){
                arr[i]=arr[i+1];
            }
        }

        j=j+1;
    }
    

    return 0;
}
