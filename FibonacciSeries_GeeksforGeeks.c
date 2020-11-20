#include<stdio.h>
#include<stdlib.h>

long long int Fibonacci(int n)
{
    if(n<=1){
        return n;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+1){
        printf("%lld\n",Fibonacci(i));
    }
return 0;
}