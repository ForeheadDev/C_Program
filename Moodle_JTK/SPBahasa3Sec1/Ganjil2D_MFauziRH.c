/* 
Program :  Ganjil2D_MFauziRH.c
Deskripsi : menghitung kemunculan angka ganjil di dalam array dua dimensi
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 16 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int angka[4][4];
	int i, j; // counter array
	int count = 0;
	
	/* Algoritma */
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(j != 3)
				scanf("%d ", &angka[i][j]);
			else
				scanf("%d\n", &angka[i][j]);
			
			if(angka[i][j] % 2 != 0)
				count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
