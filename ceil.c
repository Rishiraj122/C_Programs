#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,k,x=1;
    scanf("%d %d",&n,&k);

    x=n/k;
    if(n%k>0){
        x=x+1;
    }
    printf("%d",x);



return 0;
}