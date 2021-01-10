/* Program: Jumlah_MFauziRH.c
 * Deskripsi: 
 * Nama: Muhammad Fauzi Rizki Hamdalah
 * Tanggal/Versi: 26 Desember 2020 / ver 0.1
 * Compiler: TDM-GCC 4.9.2 64-bit Release
 * Waktu pengerjaan: +- 15 Menit
 */
 
 #include <stdio.h>
 
 int main()
 {
 	/* Deklarasi Program */
 	int bilX, bilY;
 	int plus = 0, min = 0, cross = 0;
 	
 	/* Algoritma */
 	scanf("%d %d\n", &bilX, &bilY);
 	
 	plus = bilX + bilY;
 	min = bilX - bilY;
 	cross = bilX * bilY;
 	
 	printf("%d\n", plus);
 	printf("%d\n", min);
 	printf("%d\n", cross);
 	printf("%d\n", plus * 2);
 	printf("%d\n", min * 2);
 	printf("%d\n", cross * 2);
 	printf("%d\n", plus + (plus * 2));
 	printf("%d\n", min + (min* 2));
 	printf("%d\n", cross + (cross * 2));
 	
 	return 0; // exit code
 }
