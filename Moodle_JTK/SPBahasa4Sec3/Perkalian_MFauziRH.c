/* 
Program :  Perkalian_MFauziRH.c
Deskripsi : menghitung perkalian dua angka
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

int HitungPerkalian(int x, int y);

int main()
{
	/* Kamus Data */
	int number1, number2;
	int jumlah;
	
	/* Algoritma */
	scanf("%d %d", &number1, &number2);
	
	jumlah = HitungPerkalian(number1, number2);
	
	printf("%d\n", jumlah);
	
	return 0;
}

int HitungPerkalian(int x, int y)
{
 return x * y;
}
