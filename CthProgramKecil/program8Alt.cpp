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
	angka = angka - (angka * 2);
	return angka;
}

int main(){
/*Deklarasi */
int angka;
/*Program */
printf("Masukkan 1 digit angka :");
scanf("%d",&angka);

if(angka > -10 && angka < 10)
{
	if (angka > 0) //Test Positif / Negatif
	{ printf("Positif %d", angka);}
	else
	{ printf("Minus %d", abs(angka));}
}else
{
	printf("Satu digit saja ! \n");
}

}/*end main*/




