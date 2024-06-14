#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayac=0;
	int i;
	for(i=1;i<=10;i++){
		sayac=sayac+i;
	}
	printf("Sayac= %d\n",sayac);
	
	
	int faktoriyel=1;
	int j;
	int girilenFaktoriyel;
	printf("Faktoriyelini bilmek istediginiz sayiyi girin------->");
	scanf("%d",&girilenFaktoriyel);
	for(j=1;j<=girilenFaktoriyel;j++){
		faktoriyel=faktoriyel*j;
	}
	printf("Girilen sayi - %d\n",girilenFaktoriyel);
	printf("Faktoriyeli %d! = %d",girilenFaktoriyel,faktoriyel);
	
	
	
	
	
	return 0;
}
