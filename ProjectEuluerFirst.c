#include<stdio.h>
#include<stdlib.h>

int main()
{
    int maxValue,multipleof3,multipleof5,sum=0;
    printf("Enter the Maximum Value ");
    scanf("%d",&maxValue);
    for(int i=0;i<maxValue;i=i+1){
        if(i%3==0 || i%5==0){
            sum=sum+i;
        }
    }
    printf("The Sum is %d",sum);
}