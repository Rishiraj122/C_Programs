#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int arr[], int low, int high)
{
    int i=low-1;
    int Pivot=arr[high];

    for (int j=low;j<=high;j=j+1) {
        if (arr[j]<Pivot) {
            i=i+1;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
    if (low<high) {
        int p=Partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

int main()
{
    int n, k, *arr, sum=0, sums=0, testcases, x,c=0;
    scanf("%d", &testcases);
    while (testcases--) {
        scanf("%d%d", &n, &k);

        x=n/(k+1);
        if (n%(k+1)>0) {
            x=x+1;
        }

        arr=(int*)malloc(sizeof(int)*n);

        for (int i=0;i<n;i=i+1) {
            scanf("%d", &arr[i]);
        }

        quickSort(arr, 0, n-1);

        for (int i=0;i<x;i=i+1) {
            sum=sum+arr[i];
        }

        for (int i=n-1;i>=n-x;i=i-1) {
            sums=sums+arr[i];
        }

        printf("%d %d\n", sum, sums);
        sum=0;
        sums=0;
        x=1;
        c=0;
    }

    return 0;
}