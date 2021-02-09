/* 
Program :  Pangkat_MFauziRH.c
Deskripsi : menghitung hasil pangkat
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

int HitungPangkat(int x, int y);

int main()
{
	/* Kamus Data */
	int number1, number2;
	
	/* Algoritma */
	scanf("%d %d", &number1, &number2);
	
	printf("%d\n", HitungPangkat(number1, number2));
	
	return 0;
}

int HitungPangkat(int x, int y)
{
	int i, result = 1;
	for(i = 0; i < y; i++)
		result *= x;
		
 	return result; 
}
