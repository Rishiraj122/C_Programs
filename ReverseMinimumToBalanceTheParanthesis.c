#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int testcase=0;
    scanf("%d",&testcase);
    while(testcase>0){

        char arr[20],*token;
        int len,j,l=0,r=0;
        scanf("%s",&arr);

        len=strlen(arr);
        
        for(int i=0;i<len;i=i+1){
            if(arr[i]=='{'){
                l=l+1;
            }
            else if(arr[i]=='}'){
                l=l-1;//Subtract if Matching pair found, similar to pop
            }
            if(l<0){
                l=1;//Reverse it if more number of opposites found
                r=r+1;//Increment the Opposites
            }
        }
        j=r+l/2;

        if(len%2==1){
            printf("-1\n");
        }
        else{
            printf("%d\n",j);
        }
        testcase=testcase-1;
    }

return 0;
}