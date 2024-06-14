#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,k;
	int matrisA[2][2] = {1,2,3,4};
	int matrisB[2][2] = {5,6,7,8};
	int matrisToplam[2][2];
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    for(k=0;k<2;k++)
	       	{
			matrisToplam[i][j]+=matrisA[i][k]*matrisB[k][j];
	
	      	}	
				printf("%d\t",matrisToplam[i][j]);
		
		}
	
	    printf("\n");
	    
	}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
