/* 
Program :  Pola1_MFauziRH.c
Deskripsi : menampilkan pola
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 45 Menit
*/

#include <stdio.h>


int main()
{
	/* Pra-Deklarasi */
	int N;
	scanf("%d\n", &N);
	int temp[N][N];
	
	/* Deklarasi */
	int i, j;
	
	/* Algoritma */
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < i + 1; j++)
		{
			if(j == 0)
				temp[i][j] = 1;
			else
				temp[i][j] = temp[i][j - 1] * 2;
		}
	}
	
	
	for(i = 0; i < N; i++)
	{
		for(j = i; j >= 0; j--)
		{
			if(j != 0)
				printf("%d ", temp[i][j]);
			else
				printf("%d", temp[i][j]);
		}
		printf("\n");
	}
	

	
	return 0;
}
