#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,counter=0,*b,k=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<n;i=i+1){
            if(arr[i]-arr[i+1]==0){
                b[k++]=arr[i];
                b[k++]=arr[i+1];
                i=i+1;
            }
            else if(n>i+2){
                if(arr[i]-arr[i+2]==0){
                    i=i+2;
                    b[k++]=arr[i];
                    b[k++]=arr[i+2];
                }
            }
        }

        printf("%d\n",k);
        if(k==0){
            printf("1\n");
        }

        for(int w=0;w<k;w=w+1){
            printf("%d ",b[w]);
        }

    }

return 0;
}