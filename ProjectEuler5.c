#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[21],key=0;
    for(int i=0;i<20;i=i+1){
        arr[i]=i+1;
    }
    for(int j=1;j<332792560;j=j+1){
        {
            for(int i=0;i<20;i=i+1){
                if(j%arr[i]!=0){
                    key=key+1;
                }
            }
            if(key==0){
                printf("%d ",j);
            }
            key=0;
        }
    }



return 0;
}