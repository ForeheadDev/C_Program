/* 
Program : MencariHuruf_MFauziRH.c
Deskripsi : memeriksa suatu huruf di dalam array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 3 Desember 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	/* Kamus */
	char X[10] = "JTKPolban";
	char find;
	int i;
	
	/* Algoritma */
	scanf("%c", &find);
	
	for(i = 0; i < sizeof(X); i++)
	{
		if(tolower(X[i]) == tolower(find))
		{
			printf("ada\n");
			break;
		}
	}
	if(i == 10)
		printf("tidak ada\n");
	
	return 0;
}
