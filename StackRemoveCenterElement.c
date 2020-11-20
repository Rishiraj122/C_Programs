#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int data[20];
    int capacity;
    int top;
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
        printf("The Stack is Full\n");
    }
    else{
        s->data[++(s->top)]=value;
    }

}

int pop(stack* s)
{
    if(isStackEmpty(s)){
        printf("The Stack is Empty\n");
    }
    else{
        return s->data[s->top--];
    }

}

int main()
{   
    int n,*arr,x,middle,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);
        stack* s=createStack(n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&x);
            Push(s,x);
        }

        middle=n/2;

        for(int i=0;i<n;i=i+1){
            if(i==middle){
                pop(s);
            }
            else if(i!=middle){
                printf("%d ",pop(s));
            }
        }
        printf("\n");
        middle=0;
    }

return 0;
}