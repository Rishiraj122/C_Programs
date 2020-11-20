#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,*c,split,split2,testcases=0,i,j;
    scanf("%d",&testcases);
    while(testcases--){

        scanf("%d",&n);
        split=n/2;
        split2=0;
        arr=(int*)malloc(sizeof(int)*n);
        c=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        
        if(n%2==0){
            for(i=0,j=n/2;i<n/2,j<n;i=i+1,j=j+1){
                printf("%d %d ",arr[i],arr[j]);
            }
        }
        else{
            for(i=0,j=(n-1)/2;i<(n-1)/2,j<n-1;i=i+1,j=j+1){
                printf("%d %d ",arr[i],arr[j]);
            }
        }

        printf("\n");
    }

return 0;

}