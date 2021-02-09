/* 
Program :  Faktorial_MFauziRH.c
Deskripsi : menghitung nilai faktorial
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

int Faktorial(int x);

int main()
{
	/* Kamus Data */
	int num;
	
	/* Algoritma */
	scanf("%d", &num);
	
	printf("%d\n", Faktorial(num));
	
	return 0;
}

int Faktorial(int x)
{
	if(x == 0) return 1;
	else return x * Faktorial(x - 1); 
}
