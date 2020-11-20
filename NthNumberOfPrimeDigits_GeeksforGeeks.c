#include<stdio.h>
#include<stdlib.h>

int isOdd(int x){
    int temp=0;
    while(x>0){
        int n=x%10;
        if(n==2 || n==3 || n==5 || n==7){
            x=x/10;
        }
        else{
            return 1;
        }
    }

    return 0;
}

int main()
{
    int testcases;

    scanf("%d",&testcases);

    while(testcases--){

        int n,i=1;
        scanf("%d",&n);
        while(n>0){
            i=i+1;
            if(isOdd(i)==0){
                n=n-1;
            }
        }

        printf("%d\n",i);

    }

return 0;
}