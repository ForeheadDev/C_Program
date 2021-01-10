/* 
Program :  CheckSudoku_MFauziRH.c
Deskripsi : memeriksa blok sudoku
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 30 Menit
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int matriks[3][3];
	int count[9];
	int i, j;
	
	/* Algoritma */
	for(i = 0; i < 9; i++) // assign count array to 0
		count[i] = 0;
	
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d %d\n", &matriks[i][0], &matriks[i][1], &matriks[i][2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			count[matriks[i][j] - 1] += 1; // menghitung angka berdasarkan kemunculannya
		}
	}
	
	for(i = 0; i < 9; i++) 
	{
		if(count[i] > 1) // check duplikasi
		{
			printf("tidak valid\n");
			break;
		}
	}
	if(i >= 9)
		printf("valid\n");
	
	return 0;
}
