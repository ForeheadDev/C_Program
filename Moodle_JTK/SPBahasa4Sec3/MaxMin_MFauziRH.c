/* 
Program :  MaxMin_MFauziRH.c
Deskripsi : menentukan nilai terbesar dan terkecil dari dua bilangan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

int Max(int x, int y);
int Min(int x, int y);

int main()
{
	/* Kamus Data */
	int num1, num2;
	
	/* Algoritma */
	scanf("%d %d", &num1, &num2);
	
	printf("%d %d\n", Max(num1, num2), Min(num1, num2));
	
	return 0;
}

int Max(int x, int y)
{
	if(x > y) return x;
	else return y;
}

int Min(int x, int y)
{
	if(x < y) return x;
	else return y;
}
