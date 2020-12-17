/* 
Program :  ArrayVokal2D_MFauziRH.c
Deskripsi : menghitung jumlah huruf vokal dalam array 2D
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 17 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	char huruf[3][3]; 
	char vokal[5] = "AIUEO";
	int i, j, k;
	int count = 0;
	
	/* Algoritma */
	for(i = 0; i < 3; i++)
	{
		scanf("%c %c %c\n", &huruf[i][0], &huruf[i][1], &huruf[i][2]);
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < 5; k++)
			{
				if(toupper(huruf[i][j]) == vokal[k])
				{
					printf("%c: (%d,%d)\n", huruf[i][j], i + 1, j + 1);
					count += 1;
					break;
				}
			}
		}
	}
	if(count == 0)
	{
		printf("tidak ada huruf vokal\n");
	}
	
	
	return 0;
}
