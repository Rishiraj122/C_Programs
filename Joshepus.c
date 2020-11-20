#include<stdio.h>
#include<stdlib.h>

int joshepus(int n,int k){
    if(n==1){
        return 1;
    }
    else{
        return (joshepus(n-1,k)+k-1)%n+1;
    }
}

int main(){
    int n,k,testcases=0;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d%d",&n,&k);
        printf("%d\n",joshepus(n,k));
    }

return 0;
}