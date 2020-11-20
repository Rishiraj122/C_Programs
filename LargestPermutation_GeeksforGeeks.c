#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, k, *arr, testcases, *b;

    scanf("%d ", &testcases);

    while (testcases--)
    {

        scanf("%d %d", &n, &k);

        arr = (int *)malloc(sizeof(int) * n);
        b = (int *)malloc(sizeof(int) * n);

        for (int i = 0; i < n; i = i + 1)
        {
            scanf("%d", &arr[i]);
        }

        while (b != arr )
        {
            b=arr;
            for (int i = 0; i < n; i = i + 1)
            {
                for (int j = i; j < n; j = j + 1)
                {
                    if (arr[i] < arr[j] && k > 0)
                    {
                        swap(&arr[i], &arr[j]);
                        k = k - 1;
                    }
                }
            }
        }

        for (int i = 0; i < n; i = i + 1)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}