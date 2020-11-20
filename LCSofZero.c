#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int max(int a, int b){
    return (a>b) ? a:b;
}

int Maximum(char *arr, int len){
    int max=0,temp=0;
    for(int i=0;i<len;i=i+1){
        if(arr[i]=='0'){
            temp=temp+1;
        }
        else{
            if(max<temp){
                max=temp;
            }
            temp=0;
        }
    }

    return max;
}

int starting(char *arr, int len){
    int start=0;
    for(int i=0;i<len;i=i+1){
        if(arr[i]=='0'){
            start=start+1;
        }
        else{
            return start;
        }
    }
}

void rev(char arr[], int len, char b[]) 
{ 
    for (int i = 0; i < len; i++) 
        b[i]=arr[len - i - 1]; 
} 

int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        char arr[100000];
        int len,a,start=0,end=0,k;
        scanf("%d",&k);
        scanf("%s",&arr);
        len=strlen(arr);
        char b[len];

        a=Maximum(arr,len);

        start=starting(arr,len);
        rev(arr,len,b);
        end=starting(b,len);

        if(start==len){
            printf("%d\n",len*k);
        }

        else if(start!=0 && end!=0){
            printf("%d\n",max(a,start+end));
        }

        else{
            printf("%d\n",a);
        }
    
    }
    return 0;
}