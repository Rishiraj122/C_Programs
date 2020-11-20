#include<stdio.h>
#include<stdlib.h>

int sum=0;


void completeSumofDigits(int n, int sum, int counter){

    int arr[n+1][10];

    for(int i=0;i<10;i=i+1){
        arr[0][i]=i;
        if(counter<=n){
            sum=sum+arr[0][i];
            counter=counter+1;
        }
    }

    for(int i=1;i<=n;i=i+1){
        for(int j=0;j<10;j=j+1){
            if(counter%100==0){
                for(int k=0;k<10;k=k+1){
                    arr[i][k]=arr[0][k]+1;
                }
            }
            else{
                arr[i][j]=arr[i-1][j]+1+counter/100;
            }
            if(counter<=n){
                sum=sum+arr[i][j];
                counter=counter+1;
            }
        }
    }

    for(int i=0;i<=n;i=i+1){
        for(int j=1;j<10;j=j+1){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("%d\n",sum);

}

int main()
{
    int n,counter=0;
    scanf("%d",&n);
    completeSumofDigits(n,sum,counter);

return 0;
}