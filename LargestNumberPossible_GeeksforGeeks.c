#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int sumofDigits(int n)
{
    int temp=0;
    while(n>0){
        temp=temp+n%10;
        n=n/10;
    }

    return temp;
}

int main()
{
    int n,s;
    long long int x;
    scanf("%d %d",&n,&s);

    x=pow(10,n);

    printf("The value of x is : %lld \n",x);

    printf("%d ",sumofDigits(n));

return 0;
}