#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows,columns,x,y,key,paint,testcases;

    scanf("%d",&testcases);
    while(testcases--){
        printf("Enter the rows and columns ");
        scanf("%d%d",&rows,&columns);
        printf("Enter the x, y, key ");
        scanf("%d%d%d",&x,&y,&key);
        
        int arr[rows][columns],b[rows][columns],flag=1;

        for(int i=0;i<rows;i=i+1){
            for(int j=0;j<columns;j=j+1){
                scanf("%d",&arr[i][j]);
            }
        }

        for(int i=0;i<rows;i=i+1){
            for(int j=0;j<columns;j=j+1){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

        paint=arr[x][y];//Colour To Be Changed
        

        printf("The COlour To Be Changed is: %d",paint);
        printf("\n");
        
        arr[x][y]=key;

            while(flag!=0){

                for(int i=0;i<rows;i=i+1){
                    for(int j=0;j<columns;j=j+1){
                        b[i][j]=arr[i][j];
                    }
                }

                for(int i=0;i<rows;i=i+1){
                    for(int j=0;j<columns;j=j+1){
                        if(arr[i][j]==paint){
                            if(arr[i-1][j]==key){
                                arr[i][j]=key;
                            }
                            else if(arr[i+1][j]==key){
                                arr[i][j]=key;
                            }
                            else if(arr[i][j-1]==key){
                                arr[i][j]=key;
                            }
                            else if(arr[i][j+1]==key){
                                arr[i][j]=key;
                            }
                        }
                    }
                }

                flag=0;
                for(int i=0;i<rows;i=i+1){
                    for(int j=0;j<columns;j=j+1){
                        if(b[i][j]!=arr[i][j]){
                            flag=flag+1;
                        }
                    }
                }

        }//THe While loop

        for(int i=0;i<rows;i=i+1){
            for(int j=0;j<columns;j=j+1){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

    }

return 0;
}