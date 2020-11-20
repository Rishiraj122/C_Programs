#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,*t,testcases,sum,*b;
    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);
        t=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
            t[i]=b[i]=arr[i];
        }

        for(int i=0;i<n;i=i+1){
            for(int j=0;j<i;j=j+1){
                if(arr[j]<arr[i]){
                    if(t[j]+arr[i]>t[i]){
                        t[i]=t[j]+arr[i];
                    }
                }
            }
        }

        for(int i=n-2;i>=0;i=i-1){
            for(int j=n-1;j>i;j=j-1){
                if(arr[j]<arr[i]){
                    if(b[j]+arr[i]>b[i]){
                        b[i]=b[j]+arr[i];
                    }
                }
            }
        }

        sum=0;

        for(int i=0;i<n;i=i+1){
            if(t[i]+b[i]-arr[i]>sum){
                sum=t[i]+b[i]-arr[i];
            }
        }

        printf("%d\n",sum);

    }
    
return 0;
}