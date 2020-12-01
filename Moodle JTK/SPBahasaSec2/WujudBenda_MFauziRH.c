/* 
Program : WujudBenda_MFauziRH.c
Deskripsi : menentukan wujud benda berdasarkan suhunya
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus data */
	float suhu;
	
	/* Algoritma */
	scanf("%f", &suhu);
	
	if(suhu >= -150 && suhu <= 150)
	{
		if(suhu >= 0 && suhu <= 100)
		{
			printf("berwujud cair\n");
		}else
		{
			printf("berwujud non cair\n");
		}
	}
	
	return 0;
}
