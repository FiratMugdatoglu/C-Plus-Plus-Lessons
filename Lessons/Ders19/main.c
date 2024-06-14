#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int satir,sutun,i,j;
	printf("Matrisin Satir ve Sutun Sayisini Giriniz\n");
	
	printf("Satir: ");
	scanf("%d",&satir);
	
	printf("Sutun: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("Matrisin %d-%d sayisini giriniz: ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
