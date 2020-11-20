#include<stdio.h>
#include<stdlib.h>

int countPaths(int m, int n){
    int count[m][n];
    
    for(int i=0;i<m;i=i+1){
        count[i][0]=1;
    }
    
    for(int j=0;j<n;j=j+1){
        count[0][j]=1;
    }

    for(int i=1;i<m;i=i+1){
        for(int j=1;j<n;j=j+1){
            count[i][j]=count[i-1][j]+count[i][j-1];
        }
    }

    return count[m-1][n-1];

}

int main()
{

    int m,n,testcases;

    scanf("%d",&testcases);
    
    while(testcases--){
        scanf("%d%d",&m,&n);
        printf("%d\n",countPaths(m,n));
    }

return 0;
}