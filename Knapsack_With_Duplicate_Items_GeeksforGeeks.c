#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int partition(int arr[], int low, int high,int b[])
{
    int i=low-1;
    int Pivot=arr[high];

    for(int j=low;j<=high;j=j+1){
        if(arr[j]<Pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
            swap(&b[i],&b[j]);
        }
    }

    swap(&arr[i+1],&arr[high]);
    swap(&b[i+1],&b[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high, int b[])
{
    if(low<high){
        int p=partition(arr,low,high,b);
        quickSort(arr,low,p-1,b);
        quickSort(arr,p+1,high,b);
    }
}


int main()
{
    int n,w,val=0,mass=0,*arr,*b,x,testcases;

    scanf("%d",&testcases);
    while(testcases--){

        scanf("%d%d",&n,&w);
        x=w;
        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&b[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,n-1,b);

        for(int i=0;i<n;i=i+1){
            while(arr[i]<=w){
                mass=mass+b[i];
                w=w-arr[i];
            }
        }

        quickSort(b,0,n-1,arr);

        for(int i=n-1;i>=0;i=i-1){
            while(arr[i]<=x){
                val=val+b[i];
                x=x-arr[i];
            }
        }

        if(val>mass){
            printf("%d\n",val);
        }
        else{
            printf("%d\n",mass);
        }

        val=0;
        mass=0;
    }

return 0;
}