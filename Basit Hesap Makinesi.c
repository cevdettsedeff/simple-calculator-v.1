#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	
	
	
	float sayi1,sayi2,sonuc;
	char islem;
	
	printf("\n                       Basit Hesap Makinesi\n");
	printf("***************************************************************************\n\n");
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%f",&sayi1);
	
	printf("\nIslemi giriniz: ");
	scanf("%s",&islem);
	
	printf("\nIkinci sayiyi giriniz: ");
	scanf("%f",&sayi2);
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;  //toplama iþlemi yapýyoruz.
			printf("\nSonuc: %f",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;   //çýkartma iþlemi yapýyoruz.
			printf("\nSonuc: %f",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;  //bölme iþlemi yapýyoruz.
			printf("\nSonuc: %f",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;  //çarpma iþlemi yapýyoruz.
			printf("\nSonuc: %f",sonuc);
			break;
		default: printf("\nHatali islem yaptiniz.");	
	}
	
	
	return 0;
}
