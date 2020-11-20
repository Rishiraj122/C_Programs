#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int max(int a, int b)
{
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int l,*t,maximum,testcases;
    scanf("%d",&testcases);

    while(testcases--){

        char arr[1000];
        scanf("%s",&arr);
        l=strlen(arr);
        t=(int*)malloc(sizeof(int)*l);

        for(int i=0;i<l;i=i+1){
            t[i]=1;    
        }

        for(int i=0;i<l;i=i+1){
            for(int j=0;j<i;j=j+1){
                if(arr[j]<arr[i]){
                    t[i]=max(t[i],t[j]+1);
                }
            }
        }

        maximum=0;

        for(int i=0;i<l;i=i+1){
            if(maximum<t[i]){
                maximum=t[i];
            }
        }

        printf("%d\n",maximum);

    }

return 0;
}