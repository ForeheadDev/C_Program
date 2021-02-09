/* 
Program :  FPB3Var_MFauziRH.c
Deskripsi : menentukan FPB dari tiga variabel
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>

int EuclideanFPB(int a, int b);

int main()
{
	/* Kamus Data */
	int a, b, c, fpb;
	
	/* Algoritma */
	scanf("%d %d %d", &a, &b, &c);
	
	fpb = EuclideanFPB(EuclideanFPB(a,b),c);
	
	printf("%d\n", fpb);
	
	
	return 0;
}

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
