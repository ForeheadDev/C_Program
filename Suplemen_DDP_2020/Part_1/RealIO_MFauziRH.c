/* Program: RealIO_MFauziRH.c
 * Deskripsi: Menampilkan bilangan real dengan 2 presisi di belakang koma
 * Nama: Muhammad Fauzi Rizki Hamdalah
 * Tanggal/Versi: 26 Desember 2020
 * Compiler: TDM-GCC 4.9.2 64-bit Release
 * Waktu pengerjaan: +- 2 Menit
 */
 
 #include <stdio.h>
 
 int main()
 {
 	/* Deklarasi Program */
 	float bil;
 	
 	/* Algoritma */
 	scanf("%f\n", &bil);
 	printf("%.2f\n", bil);
 	
 	return 0; // exit code
 }
