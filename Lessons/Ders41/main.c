#include <stdio.h>
#include <stdlib.h>


int main() {
	
	FILE *belge;
	char veri1[20]="Bilgisayar ";
	char veri2[20]="Muhendisligi ";
	char veri3[20]="Bolumu";
	belge=fopen("C:\\Users\\FIRAT\\Desktop\\bilgi3.txt","w");
	
	fputs(veri1,belge);
	fputs(veri2,belge);
	fputs(veri3,belge);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
