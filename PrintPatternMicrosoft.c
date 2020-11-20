#include<stdio.h>
#include<stdlib.h>

int flag=0;

void pattern(int n,int Original)
{
    if(n==Original){
        printf("%d ",n);
        return;
    }
    if(n<=0 || flag==1){
        printf("%d ",n);
        n=n+5;
        flag=1;
        pattern(n,Original);
    }
    else if(n>0){
        printf("%d ",n);
        n=n-5;
        pattern(n,Original);
    }
}

int main()
{
    int n,testcases=0;
    scanf("%d",&testcases);
    while(testcases--)
    {
        scanf("%d",&n);
        printf("%d ",n);
        if(n>0){
            pattern(n-5,n);
        }
        else{
            pattern(n+5,n);
        }

        printf("\n");
        flag=0;
    }

return 0;
}