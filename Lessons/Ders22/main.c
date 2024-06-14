#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int sayi;
	double sonuc;
	printf("Karekoku Alinicak Sayiyi Girin: ");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);//SQRT ifadesi girilen sayýnýn karekökünü alýr.
	printf("Sonuc: %.4f",sonuc);
	
	
	
	printf("\n\n\n");
	//**************************************************************************
	
	
    int x,y;
    int sonuc1;
    printf("Taban: ");
    scanf("%d",&x);
    printf("Us: ");
    scanf("%d",&y);
    
    sonuc1=pow(x,y);
    
    printf("Sonuc: %d",sonuc1);
	
	
	
	printf("\n\n\n");
	//**************************************************************************
	
	
	
	double yuvarlanacakSayi , sonuc2, sonuc3;
	
	printf("Yuvarlanacak Degeri Girin: ");
	scanf("%lf",&yuvarlanacakSayi);
	
	sonuc2=floor(yuvarlanacakSayi);//sayýyý aþaðýdaki sayýya yuvarlar.
	printf("Alta Yuvarlanan Sonuc: %.f\n",sonuc2);
	
	sonuc3=ceil(yuvarlanacakSayi);//sayýyý yukarýdaki sayýya yuvarlar.
	printf("Uste Yuvarlanan Sonuc: %.f",sonuc3);
	
	
	
		printf("\n\n\n");
	//**************************************************************************
	
	double mutlakSayi,sonuc5,sonuc6;
	printf("Mutlak deðer olucak sayiyi girin: ");
	scanf("%lf",&mutlakSayi);
	sonuc5=fabs(mutlakSayi);//girilen sayýyý mutlak deðer içine alýr.
	printf("Sonuc: %.lf\n",sonuc5);
	
	sonuc6=log10(mutlakSayi);//girilen sayýyýnýn 10tabanýnda logartimasýný alýr.
	printf("Sonuc Logaritma: %.lf",sonuc6);
	
	
	
	
		printf("\n\n\n");
	//**************************************************************************
	
	double derece,sonucsin,sonuccos;
	printf("Dereceyi Girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);//Sayýnýn sinüsünü alýr.
	printf("Sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);//Sayýnýn cosinüsünü alýr.
	printf("Cosinus: %lf",sonuccos);
	
	
	return 0;
}
