#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//Float Deðiþkenler
	//%f
	
	/*
	float sayi;
	sayi=5;
	printf("%f",sayi);
	*/
	
	/*
	float sayi1,sayi2,bolum;
	sayi1=7;
	sayi2=5;
	
	bolum=sayi1/sayi2;
	
	printf("%f",bolum);
	*/
	
	
	/*
	float sayi1,sayi2,toplam;
	
	printf("Ilk sayiyi girin: ");
	scanf("%f",&sayi1);
	printf("Ikinci sayiyi girin: ");
	scanf("%f",&sayi2);
	
	toplam=sayi1+sayi2;
	
	printf("Toplam Sonucunuz: %f",toplam);
	*/
	
	
	//Aylýk 2500 TL maas alan kiþinin maaþýna yüzde 12 zamn yapýlýrsa yeni maaþý ne kadar olur.
    printf("******** Zam maaþ mesabi *********");
    printf("\n\n");
    float maas,yenimaas;
    printf("Maasinizi Girin: ")
    scanf("%f",&maas);
    yenimaas=maas+maas*12/100;
    printf("Yeni Maasiniz: %f",yenimaas);
	
	
	
	
	
	
	
	return 0;
}
