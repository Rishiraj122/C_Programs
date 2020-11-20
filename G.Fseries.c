#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void gfSerie(int arr[],int low,int high){
    if(low<high){

        arr[low]=pow(arr[low-2],2)-arr[low-1];
        
        gfSerie(arr,low+1,high);
    }
}

int main()
{
    int n,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    arr[0]=0;
    arr[1]=1;
    gfSerie(arr,2,n-1);

    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }

return 0;
}