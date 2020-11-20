#include<stdio.h>
#include<stdlib.h>

int swap(int* a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{
    int i=low-1;
    int pivot=arr[high];
    
    for(int j=low;j<=high;j=j+1){
        if(arr[j]<pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high)
{
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int testcase,x=1;
    scanf("%d",&testcase);
    while(x<=testcase){
        int n,b,*arr,y=0;
        scanf("%d%d",&n,&b);
        arr=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,n-1);

        for(int i=0;i<n;i=i+1){
            if(arr[i]<=b){
                b=b-arr[i];
                y++;
            }
        }

        printf("Case #%d: %d\n",x,y);
        y=0;
        x=x+1;
    }

return 0;
}