#include<stdio.h>
#include<stdlib.h>

char findProfessionals(int level, int pos){
    if(level==1){
        return 'e';
    }
    if(findProfessionals(level-1, (pos+1)/2)=='d'){
        if(pos%2!=0){
            return 'd';
        }
        else{
            return 'e';
        }
    }

    else{
        if(pos%2!=0){
            return 'e';
        }
        else{
            return 'd';
        }
    }
}

int main()
{
    int level,pos,testcases;
    scanf("%d",&testcases);
    
    while(testcases--){
        
        scanf("%d%d",&level,&pos);
        if(findProfessionals(level,pos)=='e'){
            printf("Engineer\n");
        }
        else{
            printf("Doctor\n");
        }

    }

return 0;
}