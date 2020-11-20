#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n,s,m,count=0,testcases;
    double totalfood,days=0;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d %d %d",&s,&n,&m);

        if(n<=m || (s>6 && (n-m)*6<m)){
            printf("-1\n");
        }
        else{
            totalfood=s*m;
            days=ceil(totalfood/n);

            if(days==0){
                days=days+1;
            }

            printf("%.f\n",days);

        }
    }

    return 0;
}
