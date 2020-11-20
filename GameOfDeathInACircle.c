#include<stdio.h>
#include<stdlib.h>

int count=0;

int calculate(int h,int k)
{
    int l=0;
    for(int i=2;i<=h;i=i+1){
        l=(l+k)%i;
    }
    return (l+1);
}

int main()
{
    int n,k,testcase;
    scanf("%d",&testcase);
    while(testcase--){
        scanf("%d%d",&n,&k);
        printf("%d\n",calculate(n,k));
    }

return 0;
}