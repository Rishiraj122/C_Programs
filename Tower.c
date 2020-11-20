#include<stdio.h>
#include<stdlib.h>

int count=0;

void TowerofHanoi(int n,int from_rod,int aux_rod,int to_rod)
{
    if(n==0){
        return;
    }
    count++;
    TowerofHanoi(n-1,from_rod,to_rod,aux_rod);
    printf("move disk %d from rod %d to rod %d\n",n,from_rod,to_rod);
    
    TowerofHanoi(n-1,aux_rod,from_rod,to_rod);
}

int main()
{
    int n,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        TowerofHanoi(n,1,2,3);
        printf("%d\n",count);
        count=0;
    }

return 0;
}