#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,s,sum=0,*arr,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d %d",&n,&s);

        arr=(int*)malloc(sizeof(int)*n);

        if(9*n<s){
            printf("-1\n");
        }

        else{

            for(int i=0;i<n;i=i+1){
                if(s>9){
                    arr[i]=9;
                    s=s-9;
                }
                else if(-1<s && s<=9){
                    arr[i]=s;
                    s=0;
                }
            
                sum=sum+arr[i]*pow(10,n-i-1);
            
            }
            

            printf("%d\n",sum);
            sum=0;
        
        }
    }

return 0;
}