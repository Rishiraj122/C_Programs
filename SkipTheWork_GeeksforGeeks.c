#include<stdio.h>
#include<stdlib.h>

int min(int a, int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int n,*arr,include,exclude,new_inc,new_exc,testcases;

    scanf("%d",&testcases);

    while(testcases--){

    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }

    include=arr[0];
    exclude=0;

    for(int i=1;i<n;i=i+1){
        new_inc=arr[i]+min(include,exclude);
        new_exc=include;
        include=new_inc;
        exclude=new_exc;
    }

    printf("%d\n",min(include,exclude));

    }

return 0;
}