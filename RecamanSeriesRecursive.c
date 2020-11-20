#include<stdio.h>
#include<stdlib.h>

int checkRepeat(int arr[],int i,int key)
{
    for(int j=0;j<i;j=j+1){
        if(key==arr[j]){
            return 1;
        }
    }
        
    return 0;
}

void Series(int arr[],int n){
    int check;
    for(int i=1;i<n;i=i+1){
        check=checkRepeat(arr,i,arr[i-1]-i);
        if((arr[i-1]-i)>0 && check!=1){
            arr[i]=arr[i-1]-i;
        }
        else{
            arr[i]=arr[i-1]+i;
        }
    }
    check=0;
}

int main()
{
    int n,*arr,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);
        arr[0]=0;

        Series(arr,n);

        for(int i=0;i<n;i=i+1){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

return 0;
}