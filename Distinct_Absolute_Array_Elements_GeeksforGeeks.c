#include<stdio.h>
#include<stdlib.h>

int isPresent(int arr[], int i, int key)
{
    for(int j=0;j<i;j=j+1){
        if(key==arr[j]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,*arr,Counter=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            if(arr[i]<0){
                arr[i]=arr[i]*(-1);
            }
        }

        for(int i=0;i<n;i=i+1){
            if(isPresent(arr,i,arr[i])==0){
                Counter=Counter+1;
            }
        }

        printf("%d\n",Counter);
        Counter=0;

    }

return 0;
}