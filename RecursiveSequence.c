#include<stdio.h>
#include<stdlib.h>

long long int recursiveSequence(long long int n){

    if(n==1){
        return 1;
    }
    else{
        long long int multpi=1+(n*(n-1))/2;
        long long int sum=1,i;
        for(i=1;i<=n;i=i+1){
            sum=multpi*sum;
            multpi=multpi+1;
        }
        return sum+recursiveSequence(n-1);
    }

}

int main()
{   
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
    
        long long int n,result;
        scanf("%lld",&n);
        result=recursiveSequence(n);
        printf("%lld ",result);
    
        printf("\n");
    }

return 0;
}