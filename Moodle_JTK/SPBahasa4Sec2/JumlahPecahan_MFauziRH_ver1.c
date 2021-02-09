/* 
Program :  JumlahPecahan_MFauziRH.c
Deskripsi : mencari hasil penjumlahan pecahan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 25 Januari 2021/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

int EuclideanFPB(int a, int b)
{
	int k;
	while(b != 0)
	{
		k = a % b;
		a = b;
		b = k;
	}
	return a;
}

#include <stdio.h>
int main()
{
	/* Deklarasi */
	int a, b, c, d, pembilang, penyebut, fpb;
	
	/* Algoritma */
	scanf("%d %d\n", &a, &b);
	scanf("%d %d", &c, &d);
	
	pembilang = (b * d);
	penyebut = (a * d) + (c * b);
	
	fpb = EuclideanFPB(pembilang, penyebut);
	
	pembilang /= fpb;
	penyebut /= fpb;
	
	
	
	printf("%d %d\n", penyebut, pembilang);
	
	return 0;
}
