#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int dizi[2][2];
	
	dizi[0][0] = 10 ;
	dizi[0][1] = 20 ;
	dizi[1][0] = 30 ;
	dizi[1][1] = 40 ;
	
	printf("%d\t",dizi[0][0]);
	printf("%d\n",dizi[0][1]);
	printf("%d\t",dizi[1][0]);
	printf("%d\n",dizi[1][1]);
	
	
	printf("\n\n\n");
	
	int matris[2][3]={10,20,30,40,50,60};
	
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matris[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
