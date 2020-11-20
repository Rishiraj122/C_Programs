#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,i,j,*arr,k,max,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d%d",&n,&m);
        arr=(int*)malloc(sizeof(int)*n);

        for(int a=0;a<n;a=a+1){
            arr[a]=0;
        }

        max=0;

        while(m--){
        
            scanf("%d%d%d",&i,&j,&k);

            for(int a=i;a<=j;a=a+1){
                arr[a]=arr[a]+k;
                if(max<=arr[a]){
                    max=arr[a];
                }
            }
        }

        printf("%d\n",max);
        
    }

return 0;
}