#include<stdio.h>
#include<stdlib.h>

int path(int i,int j,int n,int m)
{
    if(i>n || j>m){
        return 0;
    }
    else if(i==n && j==m){
        return 1;
    }
    else{

        return path(i+1,j,n,m)+path(i,j+1,n,m);
    }
}


int main()
{
    int n,m,i=1,j=1,paths,testcase;
    scanf("%d",&testcase);
    while(testcase--){
    
        scanf("%d%d",&n,&m);
        paths=path(i,j,n,m);
        printf("%d\n",paths);
    
    }

return 0;
}