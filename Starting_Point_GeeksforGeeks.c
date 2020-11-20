#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int cx,cy,n,x=0,y=0,*arr,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d %d %d",&cx,&cy,&n);

        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n*2;i=i+1){
            scanf("%d",&arr[i]);
            if(i%2==0){
                x=x+arr[i];
            }
            else{
                y=y+arr[i];
            }
        }

        printf("%d %d\n",cx-x,cy-y);
        
        x=0;
        y=0;

    }

    return 0;
}