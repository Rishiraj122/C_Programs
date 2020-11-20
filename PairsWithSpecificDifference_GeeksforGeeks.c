#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
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
    int n,*arr,k,sum=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        scanf("%d",&k);

        quickSort(arr,0,n-1);

        for(int i=n-1;i>0;i=i-1){
            for(int j=i-1;j>=0;j=j-1){
                if(arr[i]!=0 && arr[i]-arr[j]<k && arr[j]!=0){
                    sum=sum+arr[i]+arr[j];
                    arr[i]=arr[j]=0;
                }
            }
        }

        printf("%d\n",sum);
        sum=0;
    }

return 0;
}