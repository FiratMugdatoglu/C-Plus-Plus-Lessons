#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int sayi1,sayi2,toplam;
	
	sayi1=26;
	sayi2=23;
	toplam=sayi1+sayi2;
	
	if(toplam>50){
		printf("Toplam degeriniz %d - 50 den buyuk",toplam);
	}
	if(toplam==50){
		printf("Toplam degeriniz 50");
	}
	else{
		printf("Toplam degeriniz %d - 50 den kucuk",toplam);
	}
	
	return 0;
}
