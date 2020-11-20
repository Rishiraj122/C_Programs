#include<stdio.h>
#include<stdlib.h>

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high)
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

void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int n,*arr,k,count=0,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d%d",&n,&k);
        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,n-1);

        for(int i=0;i<n;i=i+1){
            if(k>=arr[i]){
                k=k-arr[i];
                count=count+1;
            }
        }
        
        printf("%d\n",count);
        count=0;
    }

return 0;
}