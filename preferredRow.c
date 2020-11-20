#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,k,invalid=0,value,j=-1,t;
    
    //n = number of Students
    //m = number of rows
    //k = capacity of each row
    //invalid = number of students who didn't get their desired seat
    
    scanf("%d %d %d",&n,&m,&k);
    int arr[n],b[n];
    for(int i=0;i<n;i=i+1){
        scanf("%d",&value);
        arr[i]=value;
    }

    for(int i=0;i<m;i=i+1){
        b[i]=k;
    }

    for(int i=0;i<n;i=i+1){
        t=arr[i];
        b[t-1]=b[t-1]-1;
    }

    for(int i=0;i<m;i=i+1){
        if(b[i]<0){
            b[i]=b[i]*j;
            invalid=invalid+b[i];
        }
        else if(b[i]==0){
            invalid=invalid+1;
        }
    }

    printf("\n%d",invalid);

    
return 0;
}