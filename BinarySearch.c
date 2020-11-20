#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[],int l, int r, int x)
{

    if(r>=l){
        int mid=l+(r-l)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
            return binarySearch(arr,mid+1,r,x);
        }
        else{
            return binarySearch(arr,l,mid-1,x);
        }
    }

    return -1;
}

int main()
{
    int arr[8],x,mid;
    printf("Enter the Sorted Array List");
    for(int i=0;i<8;i=i+1){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Key element");
    scanf("%d",&x);
    int result= binarySearch(arr,0,7,x);

    printf("%d",result);
    

return 0;
}