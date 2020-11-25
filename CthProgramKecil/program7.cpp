/* Program : IfElse1.c
Deskripsi : Latihan selection
Nama /Author : Muhammad Fauzi Rizki Hamdalah
Tanggal/versi : 19 November 2020 / 0.1
Compiler : Dev-C++ 5.11
Pertanyaan : Tuliskan lesson learned dari program ini.Perhatikan
struktur if-then-else pada algoritma ditransformasi ke dalam
Bahasa C
=========================================================== */
#include <stdio.h>
int main()
{
/*DEKLARASI */
int number;
/* PROSES*/
printf("Masukkan Nilai :");
scanf("%d",&number);
if (number > 0)
printf("Positif");
else { //Ini comment line (number <=0)
if (number < 0)
printf("Negatif");
else // (number = 0)
printf("Nol");
}
return 0;
}
