#include<stdio.h>
#include<stdlib.h>

typedef struct Chartree
{
    char data;
    struct Chartree* top,*next;
}Chartree;


Chartree* createInitial(char val){
    Chartree* chTree= (Chartree*)malloc(sizeof(Chartree));
    chTree->data=val;
    chTree->top=NULL;
    chTree->next=NULL;
}

int main()
{   
    int n,*arr;
    scanf("%d",&n);
    char b[n];
    Chartree* ct;
    arr=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%s",&b[i]);
    }


    ct=createInitial(b[0]);
    ct->next=createInitial(b[1]);

    for(int i=0;i<n;i=i+1){
        if(ct==NULL){
            ct=createInitial(b[i]);
        }
        else{
            Chartree* temp=createInitial(b[i]);
            
        }
    }

    printf("%c",initialNode->data);
    printf("%c",initialNode->next->data);

return 0;
}