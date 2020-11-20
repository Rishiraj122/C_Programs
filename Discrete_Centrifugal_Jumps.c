#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,jumpingjack,k=1,i=0,time=0;
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }

    jumpingjack=0;

    while(i<n){
        if(arr[i]<=arr[k]){
            i=k;
            jumpingjack=jumpingjack+1;
        }

        k=k+1;

        time=time+1;

    }



    printf("%d\n",jumpingjack-1);

return 0;
}

