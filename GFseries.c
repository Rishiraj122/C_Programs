#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void gfSerie(long long arr[],long long low,long long high){

    if(low<=high){

        arr[low]=arr[low-2]*arr[low-2];
        arr[low]=arr[low]-arr[low-1];
        gfSerie(arr,low+1,high);
    }
}

int main()
{
    long long n,arr[2000],testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        arr[0]=0;
        arr[1]=1;
        gfSerie(arr,2,n-1);

        for(long long i=0;i<n;i=i+1){
            printf("%d ",arr[i]);
        }

        printf("\n");
    }

return 0;
}