#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int before(char arr[], char x, char j)
{
    for(int i=0;i<j;i=i+1){
        if(x==arr[i]){
            return 1;
        }
    }
}

int main()
{
    int flag=0,testcases;

    scanf("%d",&testcases);
    while(testcases--){    
        char arr[10000],b[2];
        scanf("%s",&arr);

        for(int i=0;i<strlen(arr);i=i+1){
            for(int j=i;j<strlen(arr);j=j+1){
                if(arr[j]<arr[i] && before(arr,arr[i],i)!=1){
                    b[0]=arr[i];
                    b[1]=arr[j];
                    flag=1;
                    break;
                }
            }
        }

        if(flag==1){
            for(int i=0;i<strlen(arr);i=i+1){
                if(arr[i]==b[0]){
                    arr[i]=b[1];
                }
                else if(arr[i]==b[1]){
                    arr[i]=b[0];
                }
            }
        }

        for(int i=0;i<strlen(arr);i=i+1){
            printf("%c",arr[i]);
        }

        flag=0;
        printf("\n");
    }

return 0;
}