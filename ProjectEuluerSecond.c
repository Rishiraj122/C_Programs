#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int maxValue,*arr,sum=0;
    printf("Enter the number of terms you wanna print");
    scanf("%d",&maxValue);
    arr=(long int*)malloc(sizeof(long int)*maxValue);
    for(long int i=0;i<maxValue;i=i+1){
        if(i==0){
            arr[i]=1;
        }
        else if(i==1){
            arr[i]=2;
        }
        else{
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
    for(long int i=0;i<maxValue;i=i+1){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }

    printf("The Sum of The Fibonacci Even Numbers is: %d",sum);
return 0;
}