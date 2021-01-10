/* 
Program :  Couple_MFauziRH.c
Deskripsi : mengetahui huruf berpasangan pada kata JTKPolban ( huruf a berada tepat setelah b)
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 11 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	char X[10] = "JTKPolban";
	char A, B;
	int i;
	
	scanf("%c %c\n", &A, &B);
	
	for(i = 0; i < 10; i++)
	{
		if(tolower(A)== tolower(X[i]))
		{
			if(tolower(B)== tolower(X[i-1]))
			{
				printf("ada\n");
				break;
			}
		}
	}
	if(i == 10)
	{
		printf("tidak ada\n");
	}
	
	return 0;
}
