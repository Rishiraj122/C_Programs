#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(char* a,char* b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void combine(char *arr,int i,int r){
    if(i==r){
        printf("%s ",arr);
    }
    else{
        for(int j=i;j<=r;j=j+1){
            swap(&arr[j],&arr[i]);
            combine(arr,i+1,r);
            swap(&arr[j],&arr[i]);
        }
    }
}

int main()
{
    int testcases=0;
    scanf("%d",&testcases);
    while(testcases--){
        int n;
        char arr[n];
        scanf("%s",&arr);
        n=strlen(arr);
        combine(arr,0,n-1);
        
        printf("\n");
    }

return 0;
}