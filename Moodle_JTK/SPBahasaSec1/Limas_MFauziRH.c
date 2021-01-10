/* 
Program : Limas_MFauziRH.c
Deskripsi : menghitung volume limas
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/
#include <stdio.h>

int main ()
{
	/* Kamus Data */
	float volume;
	float panjang, lebar, tinggi; 
	
	/* Algoritma */
	scanf("%f\n%f\n%f", &panjang, &lebar, &tinggi);
	
	if(panjang > 0 && lebar > 0 && tinggi > 0 && panjang < 20 && lebar < 20 && tinggi < 20)
	{
		volume = (1 * panjang * lebar * tinggi) / 3;
	
		printf("%f\n", volume);
	}
	
	return 0;
}
