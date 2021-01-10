/* 
Program : GanjilGenapNol_MFauziRH.c
Deskripsi : menentukan suatu bilangan ganjil atau genap atau nol
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	int angka;
	
	/* Algoritma */
	scanf("%d", &angka);
	
	if(angka == 0)
	{
		printf("nol\n");
	}else
	{
		if(angka % 2 != 0)
		{
			printf("ganjil\n");
		}else
		{
			printf("genap\n");
		}
	}
	
	return 0;
}
