#include<stdio.h>
#include<stdlib.h>

int isPrime(int x)
{
    int count=0;
    for(int i=1;i<x;i=i+1){
        if(x%i==0){
            count=count+1;
        }
    }
    return count;

}

int main()
{
    int *arr,i,j=0;
    arr=(int*)malloc(sizeof(int)*120000);
    for(int i=2;i<110001;i=i+1){
        if(isPrime(i)<=1){
            arr[j]=i;
            j=j+1;
        }
    }

    printf("%d",arr[10001]);

return 0;
}