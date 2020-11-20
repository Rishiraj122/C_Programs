#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int testcases,n,sum=0;
    scanf("%d",&testcases);

    while(testcases--){

        char *arr=(char*)malloc(sizeof(char)*(int)pow(10,12));
        scanf("%s",&arr);
        n=strlen(arr);
        int dp[n][n];

        for(int i=0;i<n;i=i+1){
            for(int j=0;j<n;j=j+1){
                if(j==0){
                    dp[i][j]=arr[i]-'0';
                    sum=sum+dp[i][0];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }

        for(int i=1;i<n;i=i+1){
            for(int j=1;j<n;j=j+1){
                if(dp[i-1][j-1]!=0){
                    dp[i][j]=dp[i-1][j-1]*10+dp[i][0];
                    sum=sum+dp[i][j];
                }
            }
        }

        printf("%d\n",sum);
        sum=0;

    }

return 0;
}