#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);

        arr[0]=1;
        arr[1]=2;
        arr[2]=4;

        for(int i=3;i<n;i=i+1){
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        }

        printf("%d\n",arr[n-1]);

    }

return 0;
}