/* 
Program :  Challenge01_MFauziRH.c
Deskripsi : mengubah sebuah kata menjadi sandi dengan aturan penkodean yang telah ditentukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 15 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	char text[31]; // input text
	char rule[9][3] =
	{
		{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'},
		{'M', 'N', 'O'}, {'P', 'Q', 'R'}, {'S', 'T', 'U'}, {'V', 'W', 'X'}, {'Y', 'Z', 'Z'}
	};
	int i, j, k;
	int len;
	
	/* Algoritma */
	scanf("%[^\n]\n", &text);
	
	for(len = 0; len < text[len]; len++)
	{
		if(text[len] >= 0x61 && text[len] <= 0x7A) 
			text[len] -= 0x20; // mengubah ke huruf kapital
	}
	
	for(i = 0;i < len; i++)
	{
		
		for(j = 0; j < 9; j++)
		{
			if(text[i] == ' ')
			{
				printf("%d ", 0);
				break;
			}else
			{
				if(text[i] >= rule[j][0] && text[i] <= rule[j][2])
				{
					for(k = 0; k < 3; k++)
					{			
						if(text[i] >= rule[j][k])
						{
							printf("%d", j + 1);
							if(i != len - 1)
							{
								printf(" ");
							}else if(i == len -1 && text[i] > rule[j][k])
							{
								printf(" ");
							}
							
							if(text[i] == 'Z')
								if(k == 1)
									break;
						}

					}
						
					if(text[i+1] >= rule[j][0] && text[i+1] <= rule[j][2])
					{
						printf("%d ", -1);	
					}	
						
					break;
				}
			}
			
		}
	}
	
	printf("\n");
	
	return 0;
}
