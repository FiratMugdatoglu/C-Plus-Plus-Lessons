#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int sayi;
	double sonuc;
	printf("Karekoku Alinicak Sayiyi Girin: ");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);//SQRT ifadesi girilen say�n�n karek�k�n� al�r.
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
	
	sonuc2=floor(yuvarlanacakSayi);//say�y� a�a��daki say�ya yuvarlar.
	printf("Alta Yuvarlanan Sonuc: %.f\n",sonuc2);
	
	sonuc3=ceil(yuvarlanacakSayi);//say�y� yukar�daki say�ya yuvarlar.
	printf("Uste Yuvarlanan Sonuc: %.f",sonuc3);
	
	
	
		printf("\n\n\n");
	//**************************************************************************
	
	double mutlakSayi,sonuc5,sonuc6;
	printf("Mutlak de�er olucak sayiyi girin: ");
	scanf("%lf",&mutlakSayi);
	sonuc5=fabs(mutlakSayi);//girilen say�y� mutlak de�er i�ine al�r.
	printf("Sonuc: %.lf\n",sonuc5);
	
	sonuc6=log10(mutlakSayi);//girilen say�y�n�n 10taban�nda logartimas�n� al�r.
	printf("Sonuc Logaritma: %.lf",sonuc6);
	
	
	
	
		printf("\n\n\n");
	//**************************************************************************
	
	double derece,sonucsin,sonuccos;
	printf("Dereceyi Girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);//Say�n�n sin�s�n� al�r.
	printf("Sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);//Say�n�n cosin�s�n� al�r.
	printf("Cosinus: %lf",sonuccos);
	
	
	return 0;
}
