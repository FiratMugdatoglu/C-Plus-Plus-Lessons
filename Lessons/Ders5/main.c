#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//Float De�i�kenler
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
	
	
	//Ayl�k 2500 TL maas alan ki�inin maa��na y�zde 12 zamn yap�l�rsa yeni maa�� ne kadar olur.
    printf("******** Zam maa� mesabi *********");
    printf("\n\n");
    float maas,yenimaas;
    printf("Maasinizi Girin: ")
    scanf("%f",&maas);
    yenimaas=maas+maas*12/100;
    printf("Yeni Maasiniz: %f",yenimaas);
	
	
	
	
	
	
	
	return 0;
}
