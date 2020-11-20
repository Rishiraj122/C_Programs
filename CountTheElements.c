#include<stdio.h>
#include<stdlib.h>

int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high){
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

void quickSort(int arr[], int low, int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr, p+1, high);
    }
}

int solution(int x, int b[], int l, int n){
    while(l<=n){
        int mid=(l+n)/2;

        if(b[mid]<=x){
            l=mid+1;
        }
        else{
            n=mid - 1;
        }
    }

    return (n+1);
}

int main()
{
    int testcases;

    scanf("%d",&testcases);

    while(testcases--){

        int n,q,*t;
        scanf("%d",&n);
        int arr[n],b[n];

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&b[i]);
        }

        quickSort(b,0,n-1);

        scanf("%d",&q);

        t=(int*)malloc(sizeof(int)*q);

        for(int i=0;i<q;i=i+1){
            scanf("%d",&t[i]);
        }

        for(int i=0;i<q;i=i+1){
            int temp=t[i];
            printf("%d\n",solution(arr[temp],b,0,n-1));
        }

    }

return 0;
}