#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[3][3]={0,1,2,3,4,5,6,7,8};
    for(int i=2,j=2;i>=0 && j>=0;i--,j--){
        printf("%d",arr[i][j]);
    }

return 0;
}