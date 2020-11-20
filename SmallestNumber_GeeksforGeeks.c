#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int sumofDigits(int n){
    int sum=0,temp;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }

    return sum;
}

int main()
{
    int n,sum,comp,upper,lower,testcases,flag=0;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d%d",&sum,&n);

        upper=pow(10,n);
        lower=pow(10,n-1);

        for(int i=lower;i<=upper;i=i+1){
            comp=sumofDigits(i);
            if(comp==sum){
                flag=1;
                printf("%d\n",i);
                break;
            }
        }

        if(flag==0){
            printf("-1\n");
        }

        flag=0;
    }

return 0;
}