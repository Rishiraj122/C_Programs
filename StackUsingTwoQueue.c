#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int data[30];
    int front;
    int rear;
    int capacity;
}queue;

queue* createqueue(int value)
{
    queue* q=(queue*)malloc(sizeof(queue));
    q->capacity=value;
    q->front=0;
    q->rear=-1;
    return q;
}

int isfull(queue* q)
{
    return q->rear==q->capacity-1;
}

int isempty(queue* q)
{
    return q->front==q->rear+1;
}

void insert(queue* q,int value)
{
    if(isfull(q)){
        printf("The Queue is Full");
    }
    else{
        q->data[++(q->rear)]=value;
    }
}

int deletee(queue* q)
{
    if(isempty(q)){
        printf("-1");
    }
    else{
        int temp=q->data[q->front];
        q->data[q->front]=q->data[q->front++];
        return temp;
    }
}

void reverseQueue(queue* q,queue* rev,int n){
    while(n--){
        rev->data[++(rev->rear)]=q->data[q->rear--];
    }
}

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--){
        int n,*arr,flag=0;
        printf("Enter the number of elements ");
        scanf("%d",&n);
        queue* q=createqueue(n);
        queue* rev=createqueue(n);
        arr=(int*)malloc(sizeof(int)*n);

        printf("Enter the elements ");
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            if(arr[i]==1){
                insert(q,arr[i+1]);
                i=i+1;
            }
            else if(arr[i]==2){
                rev=q;
                if(!isempty(rev)){
                    printf("%d ",rev->data[(rev->rear)--]);
                }
                else{
                    printf("-1 ");
                }
            }
        }

        printf("\n");
    }
    
return 0;
}
