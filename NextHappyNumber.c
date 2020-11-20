#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int isHappyNumber(int n,int original,int count)
{
    int temp=0,arr[23],i=0;
    while(n>0){
        arr[i++]=n%10;
        n=n/10;
    }

    for(int j=0;j<i;j=j+1){
        temp=pow(arr[j],2)+temp;
    }

    if(temp==1){
        count=100;
        return 1;
    }
    else if(count<100){
        count=count+1;
        isHappyNumber(temp,original,count);
    } 
    else{
        return -1;
    }   

}

int main()
{
    int n,original,count=0,happy,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        n=n+1;
        original=n;
        happy=isHappyNumber(n,original,0);

        while(happy!=1){
            n=n+1;
            original=original+1;
            happy=isHappyNumber(n,original,0);
        }


        printf("%d \n",n);
    
    }

return 0;
}