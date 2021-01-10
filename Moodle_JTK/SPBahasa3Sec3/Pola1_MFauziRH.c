/* 
Program :  Pola1_MFauziRH.c
Deskripsi : menampilkan pola
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int N;
	int i, j;
	
	/* Algoritma */
	scanf("%d\n", &N);
	
	for(i = 0; i < N; i++){
		for(j = 0; j <= i; j++)
		{
			if(j != i)
				printf("* ");
			else
				printf("*");
		}

		printf("\n");
	}
	
	return 0;
}
