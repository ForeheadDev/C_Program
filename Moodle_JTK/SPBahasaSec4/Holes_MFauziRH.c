/* 
Program :  Holes_MFauziRH.c
Deskripsi : menghitung huruf berlubang satu (A,D,O dan P) dan berlubang dua (B) pada suatu string
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 4 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	char S[255];
	char holesChar[7] = {'A', 'D', 'O', 'P', 'Q', 'R', 'B'};
	int i, j, holes = 0;
	
	/* Algoritma */
	fgets(S, sizeof(S) + 1, stdin);
	
	for(i = 0; S[i]; i++)
	{
		for(j = 0; holesChar[j]; j++)
		{
			if(S[i] == holesChar[j] && j < 6)
				holes++;
			else if (S[i] == holesChar[j] && j == 6)
				holes += 2;
		}
	}
	
	printf("%d\n", holes);
	return 0;
}
