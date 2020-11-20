#include<stdio.h>
#include<stdlib.h>

int main()
{
    int testcase,x,SayNamastey;
    printf("Enter the number of Testcases");
    scanf("%d",&testcase);
    while(testcase>0){
        scanf("%d",&x);
        SayNamastey= (x*(x-1))/2;
        printf("The Total No. of HandSHakes: %d\n",SayNamastey);
        testcase= testcase-1;
    }

return 0;
}