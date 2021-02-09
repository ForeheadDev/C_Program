/* 
Program :  MenyusunBuku_MFauziRH.c
Deskripsi : menghitung banyak kemungkinan sususan buku pada rak buku
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/

#include <stdio.h>

/* Deklarasi Modul */
int Faktorial(int n);
int HitungSusunan(int jmlBuku, int slotRak);

int main()
{
	/* Kamus Data */
	int jmlBuku, slotRak;
	
	/* Algoritma */
	scanf("%d %d", &jmlBuku, &slotRak);
	
	printf("%d", HitungSusunan(jmlBuku, slotRak));
	
	return 0;
}

int HitungSusunan(int jmlBuku, int slotRak)
{
	int prob; // probabilitas susunan
	prob = Faktorial(slotRak) / ( Faktorial(slotRak - jmlBuku) );
	return prob;	
}

int Faktorial(int n)
{
	if(n == 0) return 1;
	else return n * Faktorial(n-1);
}


