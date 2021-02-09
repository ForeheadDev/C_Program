/* 
Program :  Palindrom_MFauziRH.c
Deskripsi : membuat kalimat berisi kata-kata palindrom dari suatu kalimat lainnya
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 6 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 45 Menit
*/

#include <stdio.h>
#include <string.h>

/* Deklarasi Modul */

int CheckPalindrom(char word[]);

int main()
{
	/* Kamus Data */
	char sentence[10000] = {};
	
	/* Algoritma */
	scanf("%[^\n]", sentence);
	
	int len = strlen(sentence);
	int i, k;
	int firstWord = 1;

	for(i = 0; i < len; i++)
	{
		k = 0;
		char tempWord[255] = {};
		while(sentence[i] != ' ')
			tempWord[k++] = sentence[i++];
		
		if(CheckPalindrom(tempWord) == 1)
		{
			if(firstWord != 1)
				printf(" ");
			
			printf("%s", tempWord);
			firstWord = 0;
		}
	}
	return 0;
}

int CheckPalindrom(char word[])
{
	int len;
	char reverse[255] = {};
	int i, j;
	
	len = strlen(word);
	
	for(i = len - 1, j = 0; i >= 0; i--, j++)
		reverse[j] = word[i];
	
	
	if(strcmp(word, reverse) == 0) return 1;
	else return 0;
}

