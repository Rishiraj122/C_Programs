#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int data[20];
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
        printf("The Queue is Full");
    }
    else{
        node->data[++(node->rear)]=element;
    }
    
}

int deletee(queue* node)
{
    if(isqueueempty(node)){
        printf("The Queue is Empty");
    }
    else{
        int temp;
        temp=node->data[node->front];
        node->data[node->front]=node->data[node->front++];
        return temp;
    }
}


typedef struct stack
{
    int data[20];
    int capacity;
    int top;
}stack;


stack* createstack(int value)
{
    stack* s=(stack*)malloc(sizeof(stack));
    s->capacity=value;
    s->top=-1;
    return s;
}

int isstackfull(stack* s)
{
    return s->top==s->capacity-1;
}

int isstackempty(stack* s)
{
    return s->top==-1;
}

void push(stack* s,int value){
    if(isstackfull(s)){

    }
    else{
        s->data[++(s->top)]=value;
    }
}

int pop(stack* s)
{
    if(isstackempty(s)){

    }
    else{
        return s->data[s->top--];
    }
}

void reverse(queue* node,queue* rev,int n)
{
    while(n>0){
        insert(rev,node->data[node->rear--]);
        n=n-1;
    }
}



int main()
{
    stack* s1=createstack(23);
    stack* s2=createstack(23);
    queue* node=createqueue(23);
    queue* rev=createqueue(23);
    int n,*arr,t=0,p;
    scanf("%d",&n);
    p=n*2-2;
    arr=(int*)malloc(sizeof(int)*p);
    for(int i=0;i<p;i=i+1){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<p;i=i+1){
        if(i%2==0){
            push(s2,arr[i]);
        }
        else if(i%2!=0){
            push(s1,arr[i]);
        }
    }

    for(int i=0;i<p;i=i+1){
        if(i%2==0){
            insert(node,pop(s1));
        }
        else if(i%2!=0){
            insert(node,pop(s2));
        }
    }

    reverse(node,rev,p);

    for(int i=0;i<p;i=i+1){
        printf("%d ",deletee(rev));
    }

return 0;
}