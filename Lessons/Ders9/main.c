#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int j;
	int kullaniciDegeri;
	int sonuc=1;
	int oncekiSayi=1;
	int simdikiSayi=1;
	int sonrakiSayi;
	printf("Kac sayili fibonacci serisi istersiniz---->");
	scanf("%d",&kullaniciDegeri);
	printf("%d\t",oncekiSayi);
	printf("%d\t",simdikiSayi);
	for(j=2;j<kullaniciDegeri;j++){
	
		sonrakiSayi=oncekiSayi+simdikiSayi;
		printf("%d\t",sonrakiSayi);
		oncekiSayi=simdikiSayi;
		simdikiSayi=sonrakiSayi;
		
		
		
		
		
	}
	 
	
	
	
	
	
	
	
	return 0;
}
