#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int max(int a, int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int longestPallindrome(char arr[]){

    int n=strlen(arr);
    int t[n][n];

    for(int i=0;i<n;i=i+1){
        t[i][i]=1;
    }

    for(int c=2; c<=n;c=c+1){

        for(int i=0;i<n-c+1;i=i+1){
            int j=i+c-1;

            if(arr[i]==arr[j] && c==2){
                t[i][j]=2;
            }
            else if(arr[i]==arr[j]){
                t[i][j]=2+t[i+1][j-1];
            }
            else{
                t[i][j]=max(t[i+1][j],t[i][j-1]);
            }

        }

    }

    return t[0][n-1];

}

int main()
{
    int n,t;
    scanf("%d",&n);

    while(n--){
        
        char arr[10000];
        scanf("%s",&arr);
        t=strlen(arr)-longestPallindrome(arr);

        printf("%d\n",t);

    }

return 0;
}