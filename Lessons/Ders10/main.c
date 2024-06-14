#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
int sayi;
printf("Bir sayi giriniz: ");
scanf("%d",&sayi);
int birler,onlar,yuzler;

yuzler=sayi/100;
printf("%d\n",yuzler);

onlar=sayi/10;
onlar=onlar%10;
printf("%d\n",onlar);

birler = sayi%10;
printf("%d",birler);
	
	
	
	
	return 0;
}
