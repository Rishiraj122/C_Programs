#include<stdio.h>
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
    int testcases,n,arr[100001];

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr[0]=0;        
        arr[1]=1;        

        for(int i=2;i<=100000;i=i+1){
            arr[i]=max(arr[i/2]+arr[i/3]+arr[i/4],i);
        }    
        printf("%d\n",arr[n]);
        
    }

return 0;
}