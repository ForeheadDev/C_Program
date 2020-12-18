/* 
Program :  PerkalianMatriks_MFauziRH.c
Deskripsi : menghitung hasil dari perkalian matriks
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 17 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Pra-Deklarasi */
	int a, b, c, d;
	int i, j, k;// counter loop
	
	scanf("%d %d\n", &a, &b);
	int A[a][b];
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			if(j != b-1)
				scanf("%d ", &A[i][j]);
			else
				scanf("%d\n", &A[i][j]);
		}
	}
	
	scanf("%d %d\n", &c, &d);
	int B[c][d];
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < d; j++)
		{
			if(j != d-1)
				scanf("%d ", &B[i][j]);
			else
				scanf("%d\n", &B[i][j]);
		}
	}
	
	/* Deklarasi */
	int result[a][d];

	/* Algoritma */
	if(b = c)
	{
		for(i = 0; i < a; i++)
		{
			for(j = 0; j < d; j++)
			{
				result[i][j] = 0;
				for(k = 0; k < c; k++)
				{
					result[i][j] = result[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		
	}
	
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < d; j++)
		{
			if(j != d - 1)
				printf("%d ", result[i][j]);
			else
				printf("%d\n", result[i][j]);
		}

	}
	
	
	return 0;
}
