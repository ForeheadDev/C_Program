/* 
Program : Kelipatan34_MFauziRH.c
Deskripsi : menentukan suatu bilangan kelipatan 3 atau 4
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	int bilangan;
	int cek; // berisi 1 jika kelipatan 3 dan 4 
			 // berisi 0 untuk sebaliknya
			 
	/* Algoritma */
	cek = 0;
	scanf("%d", &bilangan);
	
	if(bilangan % 3 == 0 && bilangan % 4 == 0)
	{
		cek = 1;
	}
	
	printf("%d\n", cek);
	
	return 0;
}
