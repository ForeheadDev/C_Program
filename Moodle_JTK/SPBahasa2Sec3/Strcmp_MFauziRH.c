/* 
Program :  Strcmp_MFauziRH.c
Deskripsi : membandingkan 2 buah string untuk mencari perbedaan ascii beserta posisi elemen yang berbeda 
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 11 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	char str1[10], str2[10];
	int i = 0, diff = 0;
	
	scanf("%[^\n]\n", &str1);
	scanf("%[^\n]\n", &str2);
	
	for(i = 0; i < 11; i++)
	{
		if(str1[i] == '\0' && str2[i] == '\0')
		{
			break;
		}else
		{
			if(str1[i] != str2[i])
			{
				diff = str1[i] - str2[i];
				if(diff < 0)
					printf("%d\n", diff);
				else
					printf("+%d\n", diff);
				
				printf("%d\n", i + 1);
				break;
			}
		}
	}
	
	if(diff == 0)
	{
		printf("%d\n", diff);
		printf("%d\n", i * 0);
	}
	
	return 0;
}
