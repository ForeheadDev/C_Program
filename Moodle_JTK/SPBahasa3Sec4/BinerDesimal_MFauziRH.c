/* 
Program :  BinerDesimal_MFauziRH.c
Deskripsi : mengubah bilangan biner ke bilangan desimal
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	/* Deklarasi */
	char strBiner[33];
	int i, j;
	int desimal = 0;
	
	/* Algoritma */
	fgets(strBiner, 33, stdin);
	
	int len = strlen(strBiner) - 1;
	int biner[len]; // array penampung biner
	
	for(i = 0 ; i < len; i++) // konversi karakter ke bilangan
	{
		biner[i] = (int) strBiner[i] - 48;
	}
	
	j = 0;
	for(i = len - 1; i >= 0; i--) // kalikan biner dengan angka pangkat urutan
	{
		biner[j] =  biner[j] * (int)pow(2,i);
		j++;	
	}
		
	
	for(i =0; i < len; i++) // menjumlahkan hasil kali
		desimal += biner[i];
	
	printf("%d\n", desimal);
	
	return 0;
}
