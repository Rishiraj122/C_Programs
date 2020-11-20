#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,count=0,testcases;
    scanf("%d",&testcases);
    while(testcases--){

        scanf("%d",&n);
        while(n!=0){
            if(n%2!=0 || n==1){
                n=n-1;
            }
            else if(n%2==0){
                n=n/2;
            }
            count=count+1;
        }
        printf("%d\n",count);
        count=0;   
    }
    
return 0;
}