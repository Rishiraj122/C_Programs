#include<stdio.h>
#include<stdlib.h>

int isPallindrome(int x)
{
    int y=0,w=x;
    while(x!=0){
        y=y*10+x%10;
        x=x/10;
    }
    if(y==w){
        return 1; //If a pallindrome number, then return 1.
    }
    else{
        return 0; // If not a pallindrome number, then return 0.
    }
}

int main()
{
    int k=0,z=0;
    int *arr= (int*)malloc(sizeof(int)*3000000);
    for(int i=100;i<1000;i=i+1){
        for(int j=100;j<1000;j=j+1){
            z=i*j;
           if(isPallindrome(z)==1){
                arr[k]=i*j;
                k=k+1;
           }
        }
    }
        
    printf("%d ",arr[k-1]); 

return 0;
}