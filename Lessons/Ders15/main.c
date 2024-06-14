#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayilar[]={10,20,30,40,50,60,70};
	
	int i;
	
	for(i=0;i<7;i++){
	printf("%d\n",sayilar[i]);
	
	}
	
	
	
	char sehir[15];
	int j;
	for(j=0;j<3;j++){
		printf("Sehri Girin: ");
		scanf("%s",sehir);
		printf("Girdiginiz il: %s ",sehir);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
