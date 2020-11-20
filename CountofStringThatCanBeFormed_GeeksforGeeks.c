#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        long long int n,result;
        scanf("%lld",&n);
        result=1+2*n+n*(pow(n,2)-1)/2;
        printf("%lld\n",result);
    }
return 0;
}