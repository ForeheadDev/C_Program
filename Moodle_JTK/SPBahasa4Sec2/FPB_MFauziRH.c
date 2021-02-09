/* 
Program :  FPB_MFauziRH.c
Deskripsi : Mencari FPB dengan algoritma euclidean
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015 [Euclidean]
Tanggal : 25 Januari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/
#include <stdio.h>

int EuclideanFPB(int a, int b)
{
	// Algoritma euclidean menggunakan operator modulus untuk mencari hasil sisa bagi dari bilangan pertama dan kedua
	// Kemudian proses di ulang dengan menukar bilangan pertama dengan bilangan kedua dan hasil modulus sebagai bilangan kedua
	// proses akan di ulang selagi hasilnya belum sama dengan 0
	
	int k;
	while(b != 0)
	{
		k = a % b;
		a = b;
		b = k;
	}
	return a;
}

int main()
{
	/* Deklarasi */
	int a, b, FPB;
	
	/* Algoritma */
	scanf("%d %d", &a, &b);
	
	FPB = EuclideanFPB(a, b);
	printf("%d", FPB);
	
	return 0;
}
