#include<stdio.h>
#include<stdlib.h>

int digits(int n)
{   
    while(n>0){
        if(n%10==4){
            return 1;
        }
        n=n/10;
    }
    return 0;
}

int main()
{
    int n,count=0,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);

        for(int i=1;i<=n;i=i+1){
            if(i==4){
                count=count+1;
            }
            else if(digits(i)==1){
                count=count+1;
            }
        }
        printf("%d\n",count);
        count=0;

    }

return 0;
}