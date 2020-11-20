#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,count=0,testcases;

    scanf("%d",&testcases);

    while(testcases--){

    scanf("%d",&n);

    for(int i=0;i<n;i=i+1){
        for(int j=0;j<n;j=j+1){
            for(int k=0;k<n;k=k+1){
                if((10*i+5*j+3*k)== n){
                    count=count+1;
                }
            }
        }
    }

    printf("%d\n",count);
    count=0;
    }

return 0;
}