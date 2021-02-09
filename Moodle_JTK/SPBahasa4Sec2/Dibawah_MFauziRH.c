/* 
Program :  Dibawah_MFauziRH.c
Deskripsi : mencari jumlah murid yang nilainya dibawah rata-rata kelas
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 25 Januari 2021/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>
int main()
{
	/* Deklarasi */
	int jmlMurid, i, jmlMuridMasalah = 0;
	float nilaiRerata = 0;
	
	scanf("%d\n", &jmlMurid);
	int nilai[jmlMurid];
	
	/* Algoritma */
	
	scanf("%d", &nilai[0]);
	nilaiRerata += nilai[0];
	for(i = 1; i < jmlMurid; i++)
	{
		scanf(" %d", &nilai[i]);
		nilaiRerata += nilai[i];
	}
	
	nilaiRerata =  (float) nilaiRerata / jmlMurid; // menghitung nilai rerata kelas
	
	for(i = 0; i < jmlMurid; i++)
	{
		if(nilai[i] < nilaiRerata)
			jmlMuridMasalah++;
	}
	printf("%d\n", jmlMuridMasalah);
	
	
	
	return 0;
}
