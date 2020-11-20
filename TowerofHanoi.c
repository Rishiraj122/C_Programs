#include<stdio.h>
#include<stdlib.h>

int count,w;

void towerofHanoi(int n,int from_rod,int aux_rod,int to_rod)
{

    if(n==0){
        return;
    }
    towerofHanoi(n-1,from_rod,to_rod,aux_rod);
    count=count+1;
    if(count==w){
        printf("%d %d\n",from_rod,to_rod);
    }
    towerofHanoi(n-1,aux_rod,from_rod,to_rod);
}

int main()
{
    int n,testcases;
    scanf("%d",&testcases);
    while(testcases>0){
        scanf("%d%d",&n,&w);
        towerofHanoi(n,1,2,3);
        count=0;
    testcases--;
    }
return 0;
}