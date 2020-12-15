/* 
Program :  Reverse_MFauziRH.c
Deskripsi : membalik array character yang telah di inputkan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 13 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	char text[11], temp;
	int i, j, len;
	
	scanf("%[^\n]", &text);
	
	for(len = 0; text[len]; len++); //count lenght array
	
	j = 0;
	for(i = len - 1; i >= 0; i--)
	{
		temp = text[j];
		text[j] = text[i];
		text[i] = temp;
		j++;
		if(len % 2 != 0)
		{
			if(j == (len / 2) + 1)
				break;
		}else
		{
			if(j == len / 2)
				break;
		}
			
	}	
	
	printf("%s\n", text);
	
	return 0;
}
