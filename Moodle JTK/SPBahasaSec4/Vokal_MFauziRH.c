/* 
Program : Vokal_MFauziRH.c
Deskripsi : menentukan suatu karakter merupakan huruf vokal atau bukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 2 Desember 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	char c; // suatu karakter c
	int i; // counter loop
	char vokal[10] = {'A', 'a', 'I', 'i', 'U', 'u', 'E', 'e', 'O', 'o'}; // huruf vokal
	
	/* Algoritma */
	scanf("%c", &c);
	
	for(i = 0; i < 10; i++)
	{
		if(c == vokal[i])
		{
			printf("true");
			break;
		}		
	}
	if(i == 10)
		printf("false");
	
	return 0;
}
