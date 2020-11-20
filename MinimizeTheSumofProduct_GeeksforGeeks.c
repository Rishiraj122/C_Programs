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

void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}



int main()
{
    int n,*arr,*b,*c,k=0,testcases,sum=0;

    scanf("%d",&testcases);
    while(testcases--){

        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);
        c=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&b[i]);
        }

        quickSort(arr,0,n-1);
        quickSort(b,0,n-1);


        for(int i=n-1;i>=0;i=i-1){
            c[k++]=b[i];
        }

        for(int i=0;i<n;i=i+1){
            sum=sum+(c[i]*arr[i]);
        }

        printf("%d\n",sum);
        sum=0;
        k=0;
    }

return 0;
}