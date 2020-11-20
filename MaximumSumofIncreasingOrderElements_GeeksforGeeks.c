#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int i = low - 1;
    int Pivot = arr[high];

    for (int j = low; j <= high; j = j + 1)
    {
        if (arr[j] < Pivot)
        {
            i = i + 1;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{
    int n, m, key, sum = 0, flag = 0, testcases,counter=0;

    scanf("%d", &testcases);

    while (testcases--)
    {

        scanf("%d %d", &n, &m);
        int arr[n][m];

        for (int i = 0; i < n; i = i + 1)
        {
            for (int j = 0; j < m; j = j + 1)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = n - 1; i >= 0; i = i - 1)
        {
            quicksort(arr[i], 0, m - 1);
        }

        key = arr[n - 1][m - 1];
        sum = key;

        for (int i = n - 2; i >= 0; i = i - 1)
        {
            for (int j = m - 1; j >= 0; j = j - 1)
            {
                if (arr[i][j] < key && flag == 0)
                {
                    sum = sum + arr[i][j];
                    key = arr[i][j];
                    flag = 1;
                    counter=counter+1;
                }
            }
            flag = 0;
        }

        if (sum == arr[n - 1][m - 1] || counter<n-1)
        {
            printf("0");
        }

        else
        {
            printf("%d ", sum);
        }

        sum=0;
        flag=0;
        counter=0;
        printf("\n");
    }

    return 0;
}