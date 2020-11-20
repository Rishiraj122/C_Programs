#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
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
    int n, *start, *final, *replica, x=0, testcases;

    scanf("%d", &testcases);

    while (testcases--) {

        scanf("%d", &n);

        start=(int*)malloc(sizeof(int)*n);
        final=(int*)malloc(sizeof(int)*n);
        replica=(int*)malloc(sizeof(int)*n);

        for (int i=0;i<n;i=i+1) {
            scanf("%d", &start[i]);
        }

        for (int i=0;i<n;i=i+1) {
            scanf("%d", &final[i]);
        }

        for (int i=0;i<n;i=i+1) {
            replica[i]=final[i];
        }

        x=0;

        quickSort(replica, 0, n-1);

        for (int i=0;i<n;i=i+1) {
            for (int j=0;j<n;j=j+1) {
                if (final[j]==replica[i] && start[j]>=x) {
                    printf("%d ", j+1);
                    x=final[j];
                }
            }
        }

        printf("\n");

    }

    return 0;

}
