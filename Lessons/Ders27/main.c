#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi
{
	
	char kitapAd[20];
	char yazar[20];
	int fiyat;
	float puan;
};



int main() {
	
	struct kitapbilgi kb={"SekerPortakali","Vasconceulos",10,7.25};
	
	printf("Kitap Ad: %s\n",kb.kitapAd);
	
	printf("Yazar : %s\n",kb.yazar);
	
	printf("Kitap Ad: %d\n",kb.fiyat);
	
	printf("Kitap Ad: %.2f",kb.puan);
	
	
	
	
	return 0;
}
