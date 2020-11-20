#include<stdio.h>
#include<stdlib.h>

int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        long i=0,a=0,b=1,c=0,n;
        scanf("%ld",&n);
        while(i!=n){
            printf("%ld ",b);
            c=a+b;
            a=b;
            b=c;
            i=i+1;
        }
        printf("\n");
    }
    
return 0;
}