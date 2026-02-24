#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
	int id;
	char ad[20];
	char soyad[20];
	char sifre[20];
	double bakiye;
	int kilitli;
}Hesap;

void hesapKaydet(Hesap *h){
}

void hesapolustur(Hesap *h){
	char ad[20], soyad[20];
	printf("Adinizi giriniz: \n");
	fgets(h->ad,sizeof(h->ad), stdin);
	
	printf("Soyadinizi giriniz: \n");
	fgets(h->soyad, sizeof(h->soyad),stdin);
	Sleep(1000);
	
	printf("\nHesap olusturuldu:\n");
    printf("Ad: %s", h->ad);
    printf("Soyad: %s", h->soyad);
}

int main() {
	int secim;
	int calisiyor = 1;
		while (calisiyor == 1){
		printf("\n--- Enes Bank ---\n");
		printf("1- Hesap olusturun\n");
		printf("2- Cikis\n");
		printf("Seciminizi giriniz -> ");
		scanf("%d", &secim);
		while(getchar() != '\n');
		
		switch (secim){
			case 1:
				printf("Hesap Olusturma Islemine Devam Ediliyor.\n");
				printf("\n bu bir github test surumudur");
				Sleep(2000);
				system("CLS");
				Hesap yeniHesap;
				hesapolustur(&yeniHesap);
				system("pause");
				Sleep(1000);
				system("CLS");
				break;
			case 2:
				printf("Program Sonlaniyor...\n");
				calisiyor = 0;
				break;		
			default:
				printf("Gecersiz Secim!\n");
		}
		
	}


	return 0;
}
