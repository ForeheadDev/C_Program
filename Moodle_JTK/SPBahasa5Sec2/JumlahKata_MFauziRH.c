/* 
Program :  JumlahKata_MFauziRH.c
Deskripsi : menghitung Jumlah Kata
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 8 Menit
*/

#include <stdio.h>
#include <string.h>

/* Deklarasi Modul */

int WordCount(char word[]);

int main()
{
	/* Kamus Data */
	char word[1001];
	
	/* Algoritma */
	scanf("%[^\n]s", word);
	
	printf("%d\n", WordCount(word));
	
	
	return 0;
}

int WordCount(char word[])
{
	int count = 1;
	int len = strlen(word);
	int i;
	
	for(i = 0; i < len; i++)
	{
		if(word[i] == ' ')
			count++;
	}
	
	return count;
}

