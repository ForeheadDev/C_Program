/* 
Program :  MatriksNol_MFauziRH.c
Deskripsi : memeriksa matriks 0
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 18 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int matriks[3][3];
	int i, j;
	int count = 0;
	
	/* Algoritma */
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d %d\n", &matriks[i][0], &matriks[i][1], &matriks[i][2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(matriks[i][j] != 0)
				break;
			else
				count++;
		}
		if(j < 3)
			break;
	}
	if(count  < 9)
		printf("bukan matriks nol\n");
	else
		printf("matriks nol\n");
		
		
		
	return 0;
}
