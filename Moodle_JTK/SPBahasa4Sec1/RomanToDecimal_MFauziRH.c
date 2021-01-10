/* 
Program :  RomanToDecimal_MFauziRH.c
Deskripsi : mengubah bilangan romawi ke bilangan desimal
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 4 Januari 2021/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 30 Menit
*/

#include <stdio.h>
#include <string.h>

/* modul untuk mengubah kode romawi menjadi nilai desimal */
int romanValue(char code)
{
	int value;
	switch(code)
	{
		case 'I' : value = 1; break;
		case 'V' : value = 5; break;
		case 'X' : value = 10; break;
		case 'L' : value = 50; break;
		case 'C' : value = 100; break;
		case 'D' : value = 500; break;
		case 'M' : value = 1000; break;
		case '\0' : value = 0; break;
	}
	return value;
}

int main()
{
	/* Deklarasi */
	char romanInput[16];
	int i;
	int desimal = 0;
	
	/* Algoritma */
	fgets(romanInput, 16, stdin);
	
	for(i = 0; romanInput[i]; i++)
	{
		if(romanValue(romanInput[i]) >= romanValue(romanInput[i + 1]))
			desimal += romanValue(romanInput[i]); // tambahkan hasil konversi ke penampung
		else 
		{
			// jika bilangan selanjutnya lebih besar maka berlaku pengurangan nilai
			desimal += (romanValue(romanInput[i + 1]) - romanValue(romanInput[i]));
			i++; // lewati 1 baris
		}
	}
	
	printf("%d\n", desimal);
	
	return 0;
}
