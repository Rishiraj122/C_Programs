#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high, int b[])
{
    int i=low-1;
    int pivot=arr[high];

    for (int j=low;j<=high;j=j+1) {
        if (arr[j]<pivot) {
            i=i+1;
            swap(&arr[i], &arr[j]);
            swap(&b[i], &b[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    swap(&b[i+1], &b[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high, int b[])
{
    if (low<high) {
        int P=partition(arr, low, high, b);
        quicksort(arr, low, P-1, b);
        quicksort(arr, P+1, high, b);
    }
}

int main()
{

    int n, *start, *finish, count=0, testcases;

    scanf("%d", &testcases);

    while (testcases--) {

        scanf("%d", &n);

        start=(int*)malloc(sizeof(int)*n);
        finish=(int*)malloc(sizeof(int)*n);


        for (int i=0;i<n;i=i+1) {
            scanf("%d", &start[i]);
        }

        for (int i=0;i<n;i=i+1) {
            scanf("%d", &finish[i]);
        }

        quicksort(finish, 0, n-1, start);

        start[-1]=0;
        finish[-1]=0;

        for (int i=0;i<n;i=i+1) {
            if (start[i]>=finish[i-1]) {
                count=count+1;
            }
            else {
                start[i]=start[i-1];
                finish[i]=finish[i-1];
            }
        }

        printf("%d\n", count);
        count=0;

    }

    return 0;
}