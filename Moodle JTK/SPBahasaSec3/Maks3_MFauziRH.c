/* 
Program : Maks3_MFauziRH.c
Deskripsi : menentukan bilangan terbesar dari 3 bilangan yang dimasukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	int x, y, z, maks;
			 
	/* Algoritma */
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	if(x > y)
	{
		if(x >z)
			maks = x;
		else
			maks = z;
	}else
	{
		if (y > z)
			maks = y;
		else
			maks = z;
	}
	
	printf("%d\n", maks);
	
	return 0;
}
