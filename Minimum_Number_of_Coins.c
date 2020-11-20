#include<stdio.h>
#include<stdlib.h>

int main()
{
    int amount,arr[10]={1,2,5,10,20,50,100,200,500,2000},testcases;

    scanf("%d",&testcases);

    while(testcases--){
        scanf("%d",&amount);
        for(int i=9;i>=0;i=i-1){
            while(amount>=arr[i]){
                amount=amount-arr[i];
                printf("%d ",arr[i]);
            }
        }
        printf("\n");
    }
return 0;
}