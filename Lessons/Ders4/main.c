#include <stdio.h>
#include <stdlib.h>


int main() {
	
	/*
	int sayi;
	printf("Bir Sayi Girin: ");
	scanf("%d",&sayi);
	printf("Girmis Oldugunuz Sayi: %d",sayi);
	*/
	
	/*
	int sayi1,sayi2,toplam,fark,carpim;
	printf("Birinci Sayiyi Girin: ");
	scanf("%d",&sayi1);
		
	printf("Ikinci Sayiyi Girin: ");
	scanf("%d",&sayi2);
		
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	
	printf("Toplam: %d\n",toplam);	
	printf("Fark: %d\n",fark);
	printf("Carpim: %d\n",carpim);
	*/
	
	/*
	int kenar,alan,cevre;
	
	printf("Karede Alan ve Cevre Hesabi\n\n");
	
	printf("Bir Kenarý Girin: ");
	scanf("%d",&kenar);
	
	alan=kenar*kenar;
	çevre=kenar*4;
	
	printf("Karenin Alani: %d\n",alan);
	printf("Karenin Cevresi: %d\n",cevre);
	*/
	
	/*
	int s1,s2,s3,ort;
	
	printf("Birinci Sinav: ");
	scanf("%d",&s1);
	
	printf("Ýkinci Sinav: ");
	scanf("%d",&s2);
	
	printf("Ucuncu Sinav: ");
	scanf("%d",&s3);	
	
	ort=(s1+s2+s3)/3;
	
	printf("Ortalamaniz: %d",ort);
	*/
	
	
	int su,kola,bilet,misir,toplam;
	
	printf("Misir Adedi: ");
	scanf("%d",&misir);
	
	printf("Kola Adedi: ");
	scanf("%d",&kola);
	
	printf("Su Adedi: ");
	scanf("%d",&su);
	
	printf("Bilet Adedi: ");
	scanf("%d",&bilet);
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	printf("Toplam Borcunuz %d TL'dir.",toplam);
	
	
	
	
	
	return 0;
}
