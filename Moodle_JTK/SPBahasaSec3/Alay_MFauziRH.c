/* 
Program : Alay_MFauziRH.c
Deskripsi : mengubah suatu kalimat menjadi kalimat alay
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 2 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	char kalimat[51];
	int i;
			 
	/* Algoritma */
	fgets(kalimat, sizeof(kalimat) + 1, stdin);
	//scanf("%[^\n]%*c", &kalimat);
	
	for(i = 0; i < sizeof(kalimat); i++)
	{
		if(kalimat[i] == 'A' || kalimat[i] == 'a')
			kalimat[i] = '4';
			
		else if(kalimat[i] == 'I' || kalimat[i] == 'i')
			kalimat[i] = '1';
			
		else if(kalimat[i] == 'Z' || kalimat[i] == 'z')
			kalimat[i] = '2';
			
		else if(kalimat[i] == 'E' || kalimat[i] == 'e')
			kalimat[i] = '3';
			
		else if(kalimat[i] == 'G' || kalimat[i] == 'g')
			kalimat[i] = '6';
			
		else if(kalimat[i] == 'J' || kalimat[i] == 'j')
			kalimat[i] = '7';
			
		else if(kalimat[i] == 'B' || kalimat[i] == 'b')
			kalimat[i] = '8';
	}
	
	printf("%s\n", kalimat);
	return 0;
}
