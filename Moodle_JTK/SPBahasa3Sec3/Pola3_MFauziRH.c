/* 
Program :  Pola3_MFauziRH.c
Deskripsi : menampilkan pola
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 10 Menit
*/

#include <stdio.h>


int main()
{
	/* Pra-Deklarasi */
	
	
	/* Deklarasi */
	int N;

	int i, j;
	int count = 0;
	
	/* Algoritma */
	scanf("%d\n", &N);
	
	for(i = N; i > 0; i--)
	{
		for(j = 0; j < i; j++)
		{
			count++;
			if(j == 0)
				printf("%d", count);
			else
				printf(" %d", count);
		}
		printf("\n");
	}
	

	
	return 0;
}
