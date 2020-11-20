#include<stdio.h>
#include<stdlib.h>

void floodFillUtil(int screen[200][200], int x, int y, int prevC, int newC,int M,int N) 
{ 
	// Base cases 
	if (x < 0 || x >= M || y < 0 || y >= N) 
		return; 
	if (screen[x][y] != prevC) 
		return; 
	if (screen[x][y] == newC) 
		return; 

	// Replace the color at (x, y) 
	screen[x][y] = newC; 

	// Recur for north, east, south and west 
	floodFillUtil(screen, x+1, y, prevC, newC,M,N); 
	floodFillUtil(screen, x-1, y, prevC, newC,M,N); 
	floodFillUtil(screen, x, y+1, prevC, newC,M,N); 
	floodFillUtil(screen, x, y-1, prevC, newC,M,N); 
} 

// It mainly finds the previous color on (x, y) and 
// calls floodFillUtil() 
void floodFill(int screen[200][200], int x, int y, int newC,int M,int N) 
{ 
	int prevC = screen[x][y]; 
	floodFillUtil(screen, x, y, prevC, newC,M,N); 
} 

// Driver program to test above function 
int main() 
{ 
    int M,N,x,y,newC,prevC,screen[200][200],testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d%d",&M,&N);

        for(int i=0;i<M;i=i+1){
            for(int j=0;j<N;j=j+1){
                scanf("%d",&screen[i][j]);
            }
        }

        scanf("%d%d%d",&x,&y,&newC);

        floodFill(screen, x, y, newC,M,N); 

        for (int i=0; i<M; i++) 
        { 
            for (int j=0; j<N; j++){
                printf("%d ",screen[i][j]);
            }
        }

        printf("\n"); 
    }
} 
