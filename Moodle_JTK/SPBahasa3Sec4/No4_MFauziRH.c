/* 
Program :  No4_MFauziRH.c
Deskripsi : menampilkan jumlah bilangan yang tidak berakhiran angka 4 di range x ke y
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 29 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Deklarasi */
	int x, y;
	int i;
	int count = 0;
	
	/* Algoritma */
	scanf("%d %d\n", &x, &y);
	
	for(i = x + 1; i < y; i++)
	{
		if(abs(i) % 10 != 4)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}
