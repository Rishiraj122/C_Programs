#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[],int n){
    int i,j,key;

    for(i=1;i<n;i=i+1){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i=i+1){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n,*arr;
    printf("Enter the size of the number list ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);

    printf("Enter the elements of the unsorted number list ");
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }

    insertionSort(arr,n);

return 0;
}