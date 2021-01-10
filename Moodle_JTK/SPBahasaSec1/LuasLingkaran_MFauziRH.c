/* 
Program : LuasLingkaran_MFauziRH.c
Deskripsi : menghitung luas lingkaran dari jari-jarinya
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/
#include <stdio.h>
#include <math.h>

int main ()
{
	/* Kamus Data */
	float luas; // variabel luas lingkaran
	float r; // variabel jari-jari lingkarang
	
	/* Algoritma */
	scanf("%f", &r);
	
	if(r > 0 && r <= 100)
	{
		luas = 3.14 * (r * r);
	
		printf("%.2f\n", luas);
	}
	
	return 0;
}
