#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree* left;
    struct tree* right;
}tree;

typedef struct queue
{
    int data[20];
    int capacity;
    int front;
    int rear;
}queue;

tree* createTree(int value)
{
    tree* t=(tree*)malloc(sizeof(tree));
    t->data=value;
    t->left=t->right=NULL;
    return t;
}

queue* createQueue(int value)
{
    queue* q=(queue*)malloc(sizeof(queue));
    q->capacity=value;
    q->front=0;
    q->rear=-1;
    
    return q;
}

tree* insertLevelOrder(tree* t,int arr[],int i,int n)
{
    if(i<n){
        tree* temp=createTree(arr[i]);
        t=temp;
        t->left=insertLevelOrder(t->left,arr,i*2+1,n);
        t->right=insertLevelOrder(t->right,arr,i*2+2,n);
    }

    return t;
}

int isFull(queue* q)
{
    return q->rear==q->capacity-1;
}

int isEmpty(queue* q)
{
    return q->front==q->rear+1;
}

void Enqueue(queue* q,int value)
{
    if(isFull(q)){

    }
    else{
        q->data[++(q->rear)]=value;
    }
}

int Dequeue(queue* q)
{
    if(isEmpty(q)){

    }
    else{
        return q->data[q->front++];
    }
}

void inOrder(tree* t)
{
    if(t!=NULL){
        inOrder(t->left);
        printf("%d ",t->data);
        inOrder(t->right);
    }
}

void DiagonalSum(queue* node,tree* p)
{
    Enqueue(node,p->data);
    Enqueue(node,0);
    int sum=0;

    while(!isEmpty(node)){
        p=Dequeue(node);//Assign it to a tree value and then maybe this code shall work :)

        if(p==0){
            Enqueue(node,0);
            p=Dequeue(node);

            if(p->data==0){
                break;
            }
        }
    }
    

    while(p!=0){
        sum=sum+p->data;
        if(p->left){
            Enqueue(node,p->left);
        }
        p=p->right;
    }

    printf("%d\n",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }

    tree* t=insertLevelOrder(t,arr,0,n);
    queue* node=createQueue(n);

    DiagonalSum(node,t);

return 0;
}