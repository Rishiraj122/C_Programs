#include<stdio.h>
#include<stdlib.h>

int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        int n,*arr,k;
        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);
        
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        scanf("%d",&k);

        quickSort(0,n-1,arr,k);

    printf("%d\n",arr[k-1]);
   }

return 0;
}