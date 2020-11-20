#include<stdio.h>
#include<stdlib.h>

int GFG(int arr[], int n, int k){

    int *b, max=0;
    b=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
        b[i]=0;
    }

    for(int i=1;i<n;i=i+1){
        if(arr[i]<=k){
            if(b[i-1]==0){
                b[i]=arr[i];
            }
            else{
                b[i]=arr[i]+b[i-1];
            }
            if(max<b[i]){
                max=b[i];
            }
        }
    }

    return max;

}

int main()
{
    int n,k,*arr,testcases;
    scanf("%d",&testcases);

    while(testcases--){
    
        scanf("%d %d",&n,&k);
        arr=(int*)malloc(sizeof(int)*n);
        printf("%d\n",GFG(arr,n,k));

    }

return 0;
}