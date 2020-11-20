#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void sumofDigits(int n)
{
    if(n==0){
        printf("0");
    }
    if(n%9!=0){
        printf("%d",n%9);
    }

    for(int i=1;i<n/9+1;i=i+1){
        printf("9");
    }

    for(int i=1;i<n+1;i=i+1){
        printf("0");
    }
    printf("\n");
}

int main()
{
    int n,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        sumofDigits(n);
    }

return 0;

}