#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi;
	printf("Lutfen Ay Numarasi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi){
		
		case 1:
		printf("Ocak");
		break;
		
		case 2:
		printf("�ubat");
		break;
		
		case 3:
		printf("Mart");
		break;
		
		case 4:
		printf("Nisan");
		break;
		
		case 5:
		printf("May�s");
		break;
		
	    default:
		printf("Hatali Giris.");
	    break;
		
		
		
		
	}
	printf("\n\n\n");
	
	char ders;
	printf("Ders Kodu   ");
	scanf("%s",&ders);
	
	switch(ders){
		
		case 't' :printf("Turkce");break;
		case 'm':printf("Matematik");break;
		case 'f':printf("Fen Bilgisi");break;
		default:printf("Hatali Giris veya B�y�k Harf Girisi.");break;
		
	
		
	}
	
	
	
	
	
	
	return 0;
}
