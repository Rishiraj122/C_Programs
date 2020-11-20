#include<stdio.h>
#include<stdlib.h>

void selectionProcedure(int arr[],int n){

    int b[n],j=1,count=0;

    for(int i=1;i<=n;i=i+1){
        if(i%2==0){
            b[j]=arr[i];
            count=count+1;
            j=j+1;
        }
    }

    if(count==1){
        printf("%d ",b[1]);
    }
    else{
        selectionProcedure(b,count);
    }

}

int main()
{
    int n,*arr,testcases=0;
    scanf("%ld",&testcases);
    while(testcases--){
        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);

        for(int i=1;i<=n;i=i+1){
            arr[i]=i;
        }

        selectionProcedure(arr,n);
        printf("\n");
    }

return 0;
}