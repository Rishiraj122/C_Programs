#include<stdio.h>
#include<stdlib.h>

int isPrime(int value){
    int count=0;
    for(int i=1;i<value;i=i+1){
        if(value%i==0){
            count=count+1;
        }
    }
    return count;
}

int main()
{
    int number,*arr,j=0,l=0;
    arr=(int*)malloc(sizeof(int)*3000000);
    printf("ENter the Number ");
    scanf("%d",&number);
    for(int i=1;i<number;i=i+1){
        if(number%i==0){
            arr[j]=i;
            j=j+1;
        }
    }

    for(int k=0;k<j;k=k+1){
        if(isPrime(arr[k])<=1){
            arr[l]=arr[k];
            l=l+1;
        }
    }
    
    printf("%d ",arr[l-1]);


return 0;
}