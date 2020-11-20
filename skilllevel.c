#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



/*
 * Complete the 'countTeams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY skills
 *  2. INTEGER minPlayers
 *  3. INTEGER minLevel
 *  4. INTEGER maxLevel
 */

int countTeams(int skills_count, int* skills, int minPlayers, int minLevel, int maxLevel) {

    int count=0;
    for(int i=0;i<skills_count;i=i+1){
        if(skills[i]<=maxLevel && skills[i]>=minLevel){
            count=count+1;
        }
    }

    return count;

}

int main()
{
    int skill_count,minPlayers, minLevel, maxLevel;
    scanf("%d",&skill_count);
    int skills[skill_count];
    
    for(int i=0;i<skill_count;i=i+1){
        scanf("%d",&skills[i]);
    }

    scanf("%d",&minPlayers);

    scanf("%d",&minLevel);

    scanf("%d",&maxLevel);

    printf("%d",countTeams(skill_count,skills,minPlayers,minLevel,maxLevel));


    return 0;
}

