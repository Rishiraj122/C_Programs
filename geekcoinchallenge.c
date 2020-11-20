#include<stdio.h>
#include<stdlib.h>


int dy(int n, int x, int y){
    int counter;
    if(n%y==0){ 
        counter=n/y;
        if(counter%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}


int dx(int n, int x, int y){
    int counter;
    if(n%x==0){ 
        counter=n/x;
        if(counter%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        counter=n/x;
        if(counter>y){
            dy(n,x,y);
        }
        else{
            if(counter%2==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

int main()
{
    int n,x,y,counter,flag=0;
    scanf("%d %d %d",&n,&x,&y);

    if(n>=x){
        flag=dx(n,x,y);
    }
    else if(n>=y){
        flag=dy(n,x,y);
    }
    else{
        if(n%2==0){
            flag=0;
        }
        else{
            flag=1;
        }
    }


    printf("%d",flag);

return 0;
}