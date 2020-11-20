#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int arr[], int low, int high,int c[])
{
    int i=low-1;
    int Pivot= arr[high];

    for(int j=low;j<=high;j=j+1){
        if(arr[j]<Pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
            swap(&c[i],&c[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    swap(&c[i+1],&c[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high,int c[])
{
    if(low<high){
        int p=Partition(arr,low,high,c);
        quickSort(arr,low,p-1,c);
        quickSort(arr,p+1,high,c);
    }
}

int main()
{
    int n,*arr,*b,key,*c,*arr2,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);
        arr2=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);
        c=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d %d",&arr[i],&b[i]);
            c[i]=arr[i]+b[i];
            arr2[i]=arr[i];
        }

        quickSort(c,0,n-1,arr);

        for(int i=0;i<n;i=i+1){
            if(c[i]==c[i+1]){
                if(arr[i]<arr[i+1]){
                    swap(&arr[i],&arr[i+1]);
                }
            }
            for(int j=0;j<n;j=j+1){
                if(arr[i]==arr2[j]){
                    printf("%d\n",j+1);
                }
            }
        }
        
    }

return 0;
}