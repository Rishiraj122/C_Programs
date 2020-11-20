#include<stdio.h>
#include<stdlib.h>

long long int mathRepeat(long long int n)
{
    if(n>1){
        return n*mathRepeat(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    long long int n,result;
    scanf("%lld",&n);
    result=mathRepeat(n);

    printf("%lld ",result);

return 0;
}