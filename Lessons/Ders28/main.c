#include <stdio.h>
#include <stdlib.h>


 struct kayit
 {
 	char ad[20];
 	int no;
 	int sinif;
 	float ort;
 };
 struct kayit ogr;



int main() {
	
	
	printf("Ad Soyad: ");
	scanf("%s",ogr.ad);
	printf("Numara: ");
	scanf("%d",&ogr.no);
	printf("Sinif: ");
	scanf("%d",&ogr.sinif);
	printf("Ortalama: ");
	scanf("%f\n\n",&ogr.ort);
	
	printf("%s\n",ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%f\n",ogr.ort);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
