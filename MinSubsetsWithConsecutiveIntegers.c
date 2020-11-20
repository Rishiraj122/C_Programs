#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int *arr, int low, int high){
    int i=low-1;
    int pivot=arr[high];

    for(int j=low;j<=high;j=j+1){
        if(arr[j]<pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int *arr, int low, int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int testcases,N;
    scanf("%d",&testcases);

    while(testcases-->0){
        int count=1;
        scanf("%d",&N);
        int *arr=(int*)malloc(sizeof(int)*N);
        for(int i=0;i<N;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,N-1);

        for(int i=1;i<N;i=i+1){
            if(arr[i]==arr[i-1]+1){
                continue;
            }
            else if(arr[i]==arr[i-1]){
                continue;
            }
            else{
                count=count+1;
            }
        }

        printf("%d\n",count);

    }

return 0;
}