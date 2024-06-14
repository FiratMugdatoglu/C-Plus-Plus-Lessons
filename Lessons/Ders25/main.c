#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char kelime[100];
	printf("Kelime Girin: ");
	scanf("%s",kelime);
	printf("Kelimenin Uzunlugu: %d",strlen(kelime));
	
	
	char kaynak[30]="Merhaba Balýkesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak);//yazýnýn hepsini kopyalar.
	printf("%s",kopya);
	
	
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,9);//buradaki 9 ne kadar karekter alacaðýmýzý gösteriyor.
	printf("%s",nereye);
	
		printf("\n\n");
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("Kitap Adi ve Yazari Girin: ");
	scanf("%s%s",kitapad,yazar);
	
	strcat(kitapyazar,kitapad);//strcat verilen deðiþkenleri birþeltirir.
	strcat(kitapyazar,"<-->");
	strcat(kitapyazar,yazar);
	printf("\n\n");
	printf("%s",kitapyazar);
	
	
	
	
	
	
	
	
	
	return 0;
}
