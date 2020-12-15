/* 
Program :  CountTriples_MFauziRH.c
Deskripsi : menghitung jumlah kemunculan tiga buah huruf berpasangan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 13 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	char text[255];
	char A, B, C;
	int i;
	int count = 0;
	
	scanf("%[^\n]\n", &text);
	scanf("%c\n%c\n%c", &A, &B, &C);
	
	i = 0;
	while (i < 255 && text[i] != '\0')
	{
			
		if(tolower(A) == tolower(text[i]))
		{
			if(tolower(B) == tolower(text[i+1]))
			{
				if(tolower(C) == tolower(text[i+2]))
				{
					count++;
				}
			}
		}
	i++;	
	}
	
	printf("%d\n", count);
	
	return 0;
}
