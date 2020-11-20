#include<stdio.h>
#include<stdlib.h>

void swap(int* a , int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{

    int i=low-1;
    int Pivot=arr[high];

    for(int j=low;j<=high;j=j+1){
        if(arr[j]<Pivot){
            i=i+1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high){
    
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main()
{
    int n,*arr,k,sum=0,x,testcases,*b,j,t;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        k=n-1;
        j=0;
        t=0;
        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        quickSort(arr,0,n-1);

        while(j<k){
            b[t++]=arr[j++];
            b[t++]=arr[k--];
        }

        if(j==k){
            b[t]=arr[j];
        }
        
        for(int i=0;i<n-1;i=i+1){
            x=b[i]-b[i+1];

            if(x<0){
                x=x*(-1);
            }
            sum=sum+x;
        }

        x=b[n-1]-b[0];

        if(x<0){
            x=x*(-1);
        }
        sum=sum+x;

        printf("%d\n",sum);
        sum=0;
    }

return 0;
}