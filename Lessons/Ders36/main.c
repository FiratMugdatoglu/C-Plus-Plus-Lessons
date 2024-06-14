#include <stdio.h>
#include <stdlib.h>
#define puan 2.25
#define puan2 3.47

int main() {
	
	int Turkce,Matematik;
	printf("Turkce Netiniz: ");
	scanf("%d",&Turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%d",&Matematik);
	
	float sozelPuan,sayisalPuan;
	sozelPuan=Turkce*puan+Matematik*puan2+50.25;
	sayisalPuan=Turkce*puan+Matematik*puan2+51.45;
	printf("Toplam Sozel Puaniniz: %5.3f\n",sozelPuan);  
	printf("Toplam Sayisal Puaniniz: %5.3f",sayisalPuan);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
