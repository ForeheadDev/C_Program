/* 
Program :  PenjumlahanTigaAngka_MFauziRH.c
Deskripsi : menjumlahkan 3 angka menggunakan konsep modular
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

int hitungJumlahTigaAngka(number1, number2, number3)
{
	return number1 + number2 + number3;
}

int main()
{
	/* Kamus Data */
	int number1, number2, number3;
	int jumlah;
	
	/* Algoritma */
	scanf("%d %d %d", &number1, &number2, &number3);
	
	jumlah = hitungJumlahTigaAngka(number1, number2, number3);
	printf("%d\n", jumlah);
	
	return 0;
}
