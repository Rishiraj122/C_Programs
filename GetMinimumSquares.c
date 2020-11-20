#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int getMinimumSquares(int n, int arr[])
{
    int counter=0,j=110;

    while(n>0){

        if(arr[j]>n){
            j=j-1;
        }
        else{
            n=n-arr[j];
            counter=counter+1;
        }

    }

    return counter;
}

int main()
{
    int n,testcases,arr[1000];

    for(int i=0;i<111;i=i+1){
        arr[i]=pow(i,2);
    }

    scanf("%d",&testcases);

    while(testcases--){
    
        scanf("%d",&n);
        printf("%d\n",getMinimumSquares(n,arr));
    
    }
return 0;
}