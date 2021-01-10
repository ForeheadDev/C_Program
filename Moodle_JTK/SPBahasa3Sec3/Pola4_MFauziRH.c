/* 
Program :  Pola4_MFauziRH.c
Deskripsi : menampilkan pola
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 20 Menit
*/

#include <stdio.h>


int main()
{
	/* Pra-Deklarasi */
	int B, K;
	scanf("%d %d\n", &B, &K);
	
	/* Deklarasi */
	int temp[B][K];
	int i, j;
	int k = 0, l = 0;
	int count = 0, tampil = 0;
	
	/* Algoritma */
	
	
	for(i = 0; i < K; i++)
	{
		if((i + 1) % 2 == 0)
		{
			for(j = B - 1; j >= 0; j--)
			{
				count++;
				temp[j][i] = count;
			}
		}else
		{
				for(j = 0; j < B; j++)
			{
				count++;
				temp[j][i] = count;
			}
		}
		
	}
	
	for(i = 0; i < B; i++)
	{
		for(j = 0; j < K; j++)
		{
			if(j == 0)
				printf("%d", temp[i][j]);
			else
				printf(" %d", temp[i][j]);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
