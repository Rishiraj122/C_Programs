#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float logn(int n, int r) {
    return log(n)/log(r);
}

int isPowerofFour(int n) {
    if (n==0) {
        return 0;
    }
    return floor(logn(n, 4))==ceil(logn(n, 4));
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d",isPowerofFour(n));

return 0;
}