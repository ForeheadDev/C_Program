/* 
Program :  KPK3Var_MFauziRH.c
Deskripsi : mencari KPK dari 3 variabel
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015 [Euclidean]
Tanggal : 5 Februari 2021/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/
#include <stdio.h>

int KPK(int a, int b);
int EuclideanFPB(int a, int b);


int main()
{
	/* Deklarasi */
	int a, b, c;
	
	/* Algoritma */
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d", KPK(KPK(a,b),c));
	
	return 0;
}

int KPK(int a, int b)
{
	return (a * b) / EuclideanFPB(a, b);
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


