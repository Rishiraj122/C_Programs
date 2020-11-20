#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack
{
    int data[100];
    int capacity;
    int top;
}stack;

stack *createstack(int capacity)
{
    stack *s=(stack*)malloc(sizeof(stack));
    s->capacity=capacity;
    s->top=-1;
}

int isStackfull(stack *s)
{
    return s->top==s->capacity-1;
}

int isStackempty(stack *s)
{
    return s->top==-1;
}

void Push(stack *s,int ele)
{
    if(isStackfull(s))
    {
        printf("\ncan't push, the stack is full\n");
    }
    else
    {
        s->data[++(s->top)]=ele;
    }
}

int pop(stack *s)
{
    if(isStackempty(s))
    {
        printf("\nThe stack is empty\n");
    }
    else
    {
    return s->data[s->top--];
    }
    
}
int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--){
        stack *s=createstack(20);
        char arr[120],*tocken;
        int count,j=0;
        scanf("%s",&arr);
        for(int i=0;i<strlen(arr);i=i+1){

            if(arr[i]=='('){
                Push(s,arr[i]);
            }
            else if(arr[i]==')' && !isStackempty(s)){
                pop(s);
                count=count+2;
            }
            if(arr[i]==')' && isStackempty(s)){
                count=0;
            }

        }
        
            printf("%d ",count);

        count=0;
    }

return 0;

}



