/* 
Program : Parkir_MFauziRH.c
Deskripsi : menghitung biaya parkir
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	int jenisKendaraan;
	int waktu;
	int totalBiaya;
	
	/* Algoritma */
	scanf("%d", &jenisKendaraan); // input jenis kendaraan
	scanf("%d", &waktu); // input lama parkit (dalam jam)
	
	switch(jenisKendaraan)
	{
		case 1:
			totalBiaya = (waktu * 1000) + 1000; 
			break;
		case 2:
			totalBiaya = (waktu *500) + 500;
			break;
	}
	
	printf("%d\n", totalBiaya);
	
	return 0;
}
