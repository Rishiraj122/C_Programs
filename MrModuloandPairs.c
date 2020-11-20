#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,*arr,count=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d%d",&n,&k);
        arr=(int*)malloc(sizeof(int)*n);
        
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n-1;i=i+1){
            for(int j=i+1;j<n;j=j+1){
                if(arr[i]%arr[j]==k || arr[j]%arr[i]==k){
                    count=count+1;
                }
            }
        }

        printf("%d\n",count);
        count = 0;

    }

return 0;
}