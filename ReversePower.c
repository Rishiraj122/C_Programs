#include<stdio.h>
#include<math.h>
#define m 1000000007

long long int reverse(long long int n)
{
    long long int r=0;
    while(n>0){
        r=(r*10)+n%10;
        n=n/10;
    }   
    return r;
}

long long int exponentialMode(long long int n, long long int r)
{
    //Check The Modular Exponentation in GeeksforGeeks
    if(r==0){
        return 1;
    }

    long long int y=exponentialMode(n,r/2);

    if(r%2==0){
        return ((y%m)*(y%m))%m;
    }

    else{
        return (n*((y*y)%m))%m;
    }
}

int main()
{
    long long int n,r,final,testcases;
    scanf("%lld",&testcases);
    while(testcases--){
    
        scanf("%lld",&n);
        r=reverse(n);
        printf("%lld\n",exponentialMode(n,r));

    }

return 0;
}