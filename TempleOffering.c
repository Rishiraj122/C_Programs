#include<stdio.h>
#include<stdlib.h>

int max(int x, int y)
{
    return (x>y? x:y);
}

int Templeoffering(int n, int arr[])
{
    int sum=0;

    for(int i=0;i<n;i=i+1){
        int a=0, b=0;

        for(int j=i-1; j>=0;j=j-1){
            if(arr[j]<arr[j+1]){
                a=a+1;
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j=j+1){
            if(arr[j]<arr[j-1]){
                b=b+1;
            }
            else{
                break;
            }
        }
        sum=sum+max(a,b)+1;
    }

    return sum;
}

int main()
{
    int n,*arr,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        printf("%d\n",Templeoffering(n,arr));

    }

return 0;
}