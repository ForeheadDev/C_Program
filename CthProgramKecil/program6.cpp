/* Program : Assign2.c
Deskripsi : Assignment sederhana dengan casting
Nama /Author : Muhammad Fauzi Rizki Hamdalah
Tanggal/versi : 19 November 2020 / 0.1
Compiler : Dev-C++ 5.11
Pertanyaan : Hal Apa yang dapat Anda catat dari program ini
Jika (float) pada Z=(float) s/p dihapus, apa yang terjadi
Ubahlah : printf("nilai Z = %f ",Z);
Menjadi : printf("nilai Z = %5.2f",Z);
============================================================ */
#include <stdio.h>
int main()
{
/*Deklarasi */
int s=3,p=2;
float Z=0;
/*Proses */
Z= (float)s/p;
printf("nilai Z = %5.2f ",Z);
return 0;
}
