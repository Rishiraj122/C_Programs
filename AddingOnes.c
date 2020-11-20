#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d %d",&n,&k);
        int arr[k],b[n];

        for(int i=0;i<k;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            b[i]=0;
        }

        for(int i=0;i<k;i=i+1){
            int x=arr[i];
            for(int j=x-1;j<n;j=j+1){
                b[j]=b[j]+1;
            }
        }

        for(int i=0;i<n;i=i+1){
            printf("%d ",b[i]);
        }

        printf("\n");

    }


return 0;
}