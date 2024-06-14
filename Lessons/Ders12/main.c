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
		printf("Þubat");
		break;
		
		case 3:
		printf("Mart");
		break;
		
		case 4:
		printf("Nisan");
		break;
		
		case 5:
		printf("Mayýs");
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
		default:printf("Hatali Giris veya Büyük Harf Girisi.");break;
		
	
		
	}
	
	
	
	
	
	
	return 0;
}
