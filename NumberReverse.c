#include<stdio.h>
#include<stdlib.h>

int isPallindrome(int x)
{
    int y=0,w=x;
    while(x!=0){
        y=y*10+x%10;
        x=x/10;
    }
    if(y==w){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int x, answer;
    printf("Enter the Number");
    scanf("%d", &x);
    answer=isPallindrome(x);
    printf("%d",answer);

return 0;
}