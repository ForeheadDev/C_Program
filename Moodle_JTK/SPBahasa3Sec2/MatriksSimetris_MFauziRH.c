/* 
Program :  MatriksSimetris_MFauziRH.c
Deskripsi : memeriksa matriks simtetris
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	/* Deklarasi */
	int matriks[3][3];
	int i, j;
	bool isSimetris = true;
	
	/* Algoritma */
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d %d\n", &matriks[i][0], &matriks[i][1], &matriks[i][2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(matriks[i][j] != matriks[j][i])
				isSimetris = false;
		}
		
		if(isSimetris == false)
			break;
	}
	
	if(isSimetris == true)
		printf("matriks simetris\n");
	else
		printf("bukan matriks simetris\n");
		
		
	return 0;
}
