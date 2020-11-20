#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int low, int high, int *arr){
    int i=low-1;
    int pivotIndex = low + rand()%(high - low + 1);
    int pivot = arr[pivotIndex];

    for(int j=low;j<high;j=j+1){
    
        if(arr[j]<pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    
    }

    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

int quickSort(int l, int r,int *arr,int k) {
    while(l <= r) {
        int mid = partition(l, r,arr);
        if(mid == k-1)
        return arr[mid];
        else if(mid > k-1)
        r = mid - 1;
        else
        l = mid + 1;
    }

    return -1;
}

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

        printf("%d\n",quickSort(0,n-1,arr,k));

   }

return 0;
}