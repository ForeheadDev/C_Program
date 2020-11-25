/* Program : Test.c
Deskripsi : Pencabangan4 & Depend on
Nama /Author : Muhammad Fauzi Rizki Hamdalah
Tanggal/versi : 19 November 2020 / 0.1
Compiler : Dev-C++ 5.11
Pertanyaan:
1. Apa yang akan dilakukan oleh program ini ?
2. Pertanyaan Tuliskan lesson learned dari program ini
============================================================ */
#include <stdio.h>

int abs(int angka){
	if(angka <0){
		angka = angka - (angka * 2);	
	}
	return angka;
}

int main(){
/*Deklarasi */
int angka;
/*Program */
printf("Masukkan 1 digit angka :");
scanf("%d",&angka);

if ((angka < 10) && (angka > -10))
{
if (angka > 0) //Test Positif / Negatif
{ printf("Positif ");}
else
{ printf("Minus ");}
switch(abs(angka))
{
case 0 : printf("Nol\n"); break;
case 1 : printf("Satu\n");break;
case 2 : printf("Dua\n");break;
case 3 : printf("Tiga\n");break;
case 4 : printf("Empat\n");break;
case 5 : printf("Lima\n");break;
case 6 : printf("Enam\n");break;
case 7 : printf("Tujuh\n");break;
case 8 : printf("Delapan\n");break;
case 9 : printf("Sembilan\n");break;
} //end case
} /*end then */
else /*angka > 9 atau < -9 */
printf("Satu digit saja ! \n");
}/*end main*/




