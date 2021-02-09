/* 
Program :  DelegasiGemastik_MFauziRH.c
Deskripsi : menghitung banyak kemungkinan sususan mahasiswa delegasi
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 10 Menit
*/

#include <stdio.h>

/* Deklarasi Modul */
int Faktorial(int n);
int HitungCara(int mhsTersedia, int mhsDelegasi);

int main()
{
	/* Kamus Data */
	int mhsTersedia, mhsDelegasi;
	
	/* Algoritma */
	scanf("%d %d", &mhsTersedia, &mhsDelegasi);
	
	printf("%d\n", HitungCara(mhsTersedia, mhsDelegasi));
	return 0;
}

int Faktorial(int n)
{
	if(n == 0) return 1;
	else return n * Faktorial(n-1);
}

int HitungCara(int mhsTersedia, int mhsDelegasi)
{
	int prob; // probabilitas susunan delegasi
	prob = Faktorial(mhsTersedia) / ( (Faktorial(mhsDelegasi) * Faktorial(mhsTersedia - mhsDelegasi) ));
	return prob;
}
