#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,*b,k=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);

        arr[-1]=0;
        b[-1]=0;

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
            b[i]=0;
        }

        for(int i=0;i<n;i=i+1){
            if(arr[i]<0){
                b[i]=0;
            }
            else{
                b[i]=b[i-1]+1;
            }
            if(k<b[i]){
                k=b[i];
            }
        }

        printf("%d\n",k);
        k=0;
    }

return 0;
}