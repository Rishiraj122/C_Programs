#include<stdio.h>
#include<stdlib.h>

int PadovanSequence(int n)
{
    int seq;
    if(n<=2){
        return 1;
    }
    else{
        return ((PadovanSequence(n-2)+PadovanSequence(n-3))%1000000007);
    }
}

int main()
{   
    int n,result,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);
        result=PadovanSequence(n);
        printf("%d\n",result);

    }

return 0;
}