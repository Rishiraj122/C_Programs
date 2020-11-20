#include<stdio.h>
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
    int pivot=arr[high];

    for (int j=low;j<=high;j=j+1) {
        if (arr[j]<pivot) {
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

int isPresent(int arr[], int key, int n) {
    for (int i=0;i<n;i=i+1) {
        if (arr[i]==key) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main()
{
    int n, k, *arr, count=0, testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        scanf("%d %d", &n, &k);
        arr=(int*)malloc(sizeof(int)*n);

        for (int i=0;i<n;i=i+1) {
            scanf("%d", &arr[i]);
        }

        quickSort(arr, 0, n-1);



        for (int i=1;k>=0;k=k-i) {
            if (i>n) {
                count=count+1;
            }
            else if (isPresent(arr, i, n)==0) {
                count=count+1;
            }

            i=i+1;
        }

        printf("%d\n", count);
        count=0;
    }

    return 0;
}