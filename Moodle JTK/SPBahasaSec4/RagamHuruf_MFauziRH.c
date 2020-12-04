/* 
Program :  RagamHuruf_MFauziRH.c
Deskripsi : menghitung ragam jenis huruf dari string yang dibaca
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 4 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	/* Kamus */
	char S[255];
	int i, j, size, count = 0;
	
	/* Algoritma */
	fgets(S, sizeof(S) + 1, stdin);
	
	for(i = 0; S[i]; i++)
	{
		S[i] = tolower(S[i]);
		
		for(j = 0; S[j]; j++)
		{
			if(S[i] == S[j])
			{
				if(j < i)
					break;
				else if(j > i)
					count++;
			}
		}
	}
	
	for(size = 0; S[size]; size++);	
	
	printf("%d\n", (size - 1) - count);
	return 0;
}
