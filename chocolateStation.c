#include <stdio.h>
#include <stdlib.h>

int main() {
	//code
	int testcases;
	scanf("%d",&testcases);
	
	while(testcases--){
	    int n,*arr,money,balance=0,p;
	    scanf("%d",&n);
	    arr=(int*)malloc(sizeof(int)*n);
	    
	    for(int i=0;i<n;i=i+1){
	        scanf("%d",&arr[i]);
	    }
	    
	    scanf("%d",&p);

	    money=arr[0];

	    for(int i=1;i<n;i=i+1){
	        int pumpkinpie=arr[i-1]-arr[i];
	        
	        if(pumpkinpie+balance>=0){
	            balance=balance+pumpkinpie;
	        }
	        else{
	            money=money+abs(balance+pumpkinpie);
                balance=0;
	        }
	    }
	    
	    printf("%d\n",money*10);
	    
	}
	
	return 0;
}