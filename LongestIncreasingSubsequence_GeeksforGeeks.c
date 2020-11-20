#include<stdio.h>
#include<stdlib.h>

int max(int x, int y){
    if(x<=y){
        return y;
    }
    else{
        return x;
    }
}

int main()
{
    int n,*arr,*t,counter,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);
        t=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
            t[i]=1;
        }

        for(int i=0;i<n;i=i+1){
            for(int j=0;j<i;j=j+1){
                if(arr[j]<arr[i]){
                    t[i]=max(t[i],t[j]+1);
                }
            }
        }

        counter=0;

        for(int i=0;i<n;i=i+1){
            if(counter<t[i]){
                counter=t[i];
            }
        }

        printf("%d\n",counter);

    }
    
return 0;
}