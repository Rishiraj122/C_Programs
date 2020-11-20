#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low, int high)
{
    int i=low-1;
    int Pivot=arr[high];

    for(int j=low;j<=high;j=j+1){
        if(arr[j]<Pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);

    return (i+1);
}

int quickSort(int arr[],int low,int high)
{
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int testcases,n,*arr;
    scanf("%d",&testcases);
    while(testcases--){

        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);

        for(int k=0;k<n;k=k+1){
            scanf("%d",&arr[k]);
        }

        quickSort(arr,0,n-1);
        
        printf("%d\n",arr[0]);
    }

return 0;
}