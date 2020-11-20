#include<stdio.h>
#include<stdlib.h>

int sum=0;

void Permutation(int digit)
{
    int i=digit-1;
    while(i>0){
        digit=digit*i;
        i=i-1;
    }
    sum=sum+digit;
}

long long int Digits(long long int n)
{
    int p;
    while(n>0){
        p=n%10;
        Permutation(p);
        n=n/10;
    }
}

int main()
{
    long long int m,n,testcases,flag=0;
    scanf("%d",&testcases);
    while(testcases--){
    
        scanf("%lld",&n);
        for(int i=0;i<100000000;i=i+1){
            
            Digits(i);
            if(sum==n){
                printf("%d ",i);
                flag=1;
                break;
            }
            sum=0;
        }
        if(flag==0){
            printf("-1");
        }

        flag=0;
        printf("\n");
    }

return 0;
}