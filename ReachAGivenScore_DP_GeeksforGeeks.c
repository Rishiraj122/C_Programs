#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, arr[] = {3, 5, 10}, testcases;

    scanf("%d", &testcases);

    while (testcases--)
    {

        scanf("%d", &n);

        int t[4][n + 1];

        for (int i = 0; i < 4; i = i + 1)
        {
            t[i][0] = 1;
        }

        for (int i = 1; i < n + 1; i = i + 1)
        {
            t[0][i] = 0;
        }

        for (int i = 1; i < 4; i = i + 1)
        {
            for (int j = 1; j < n + 1; j = j + 1)
            {
                if (arr[i - 1] <= j)
                {
                    t[i][j] = t[i - 1][j] + t[i][j - arr[i - 1]];
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }

        printf("%d\n", t[3][n]);
    }

    return 0;
}