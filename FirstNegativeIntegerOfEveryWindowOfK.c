#include<stdio.h>
#include<stdlib.h>

int isnegative(int arr[],int low,int high){
    for(int i=low;i<high;i=i+1){
        if(arr[i]<0){
            return arr[i];
        } 
    }
    return 0; 
}

int main()
{
    int testcase;
    printf("Enter The Number of Testcases ");
    scanf("%d",&testcase);
    while(testcase>0){
        int n,*arr,k,*c,w=0;
        printf("Enter The Number of Integers ");
        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);
        c=(int*)malloc(sizeof(int)*n);
        
        printf("Enter The Integers ");
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        printf("Enter The Size of Window ");
        scanf("%d",&k);

        for(int i=0;i<=n-k;i=i+1){
            c[w]=isnegative(arr,i,i+k);
            w=w+1;
        }

        for(int i=0;i<w;i=i+1){
            printf("%d ",c[i]);
        }

        printf("\n");

        testcase=testcase-1;
    }
return 0;
}