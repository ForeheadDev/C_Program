/* 
Program :  MatriksDiagonal_MFauziRH.c
Deskripsi : memeriksa matriks diagonal
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 10 Menit
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	/* Deklarasi */
	int matriks[3][3];
	int i, j;
	bool isDiagonal = true;
	
	/* Algoritma */
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d %d\n", &matriks[i][0], &matriks[i][1], &matriks[i][2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(i == j)
			{
				if(matriks[i][j] == 0)
					isDiagonal = false;
			}else
			{
				if(matriks[i][j] != 0)
					isDiagonal = false;
			}
		}
		
		if(isDiagonal == false)
			break;
	}
	
	if(isDiagonal == true)
		printf("matriks diagonal\n");
	else
		printf("bukan matriks diagonal\n");
		
		
	return 0;
}
