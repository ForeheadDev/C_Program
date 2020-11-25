/* Program : Latihan_3_2.c
Deskripsi : Menerima sebuah inputan bilangan bulat sebanyak 6 kali, menampilkan bilangan maksimal dan rata-rata nilai yang dimasukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 24 November 2020
Compiler : Dev-C++ 5.11
*/

#include <stdio.h>
#include <stdio.h>
int main()
{
	/* Deklrasi */
	int i;
	float nilai,sum = 0;
	float max = 0;
	/* ALgoritma */
	printf("Masukkan Nilai :\n");
	for ( i = 0 ; i < 6 ; i++)
	{
		scanf("%f",&nilai);
		sum+=nilai; //operasi apakah ini?	
		if (nilai > max)
		max = nilai;
	}
	//Menampilkan Output
	printf("%.3f %.2f\n",max,sum/i);
	
	return 0;
}
