/* 
Program :  JumlahPalindrom_MFauziRH.c
Deskripsi : menghitung Jumlah Kata palindrom
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 8 Menit
*/

#include <stdio.h>
#include <string.h>

/* Deklarasi Modul */

int SetWord(char word[]);
int CheckPalindrom(char word[], int k);

int main()
{
	/* Kamus Data */
	char word[1001];
	
	/* Algoritma */
	scanf("%[^\n]s", word);
	
	printf("%d\n", SetWord(word));
	
	
	return 0;
}

int CheckPalindrom(char word[], int k)
{
	int reverse[k];
	int i, j;
	
	for(i = k - 1, j = 0; i >= 0; i--, j++)
		reverse[j] = word[i];
	
	for(i = 0; i < k; i++)
	{
		if(word[i] != reverse[i])
			return -1;
	}
	
	return 1;
}

int SetWord(char word[])
{
	char temp[1001];
	int count = 0;
	int len = strlen(word);
	int i, k = 0;
	
	word[len] = ' ';
	for(i = 0; i <= len; i++)
	{
		if(word[i] != ' ')
		{
			temp[k] = word[i];
			k++;
		}
		else if(word[i] == ' ' || word[i] == '\0') 
		{
			if(CheckPalindrom(temp, k) == 1)
			{
				count++;
			}
			
			k = 0;
		}
	}
	
	return count;
}

