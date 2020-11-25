/* Program : Latihan_3_2.c
Deskripsi : Menerima sebuah inputan bilangan bulat sebanyak 6 kali, menampilkan bilangan minimal serta indeksnya pada array dan rata-rata nilai yang dimasukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 24 November 2020
Compiler : Dev-C++ 5.11
*/

#include <stdio.h>
int main()
{
	/* Deklrasi */
	int i,temp;
	float nilai[6],sum = 0;
	float min;
	/* ALgoritma */
	printf("Masukkan Nilai :\n");
	for ( i = 0 ; i < 6 ; i++)
	{
		scanf("%f",&nilai[i]);
		sum = sum + nilai[i];
	}
	/* Apa yang dilakukan oleh algoritma di bawah ini ?*/
	min = nilai[0];
	temp = 0;
	i = 0;
	while (i <= 5) {
		if (nilai[i] < min) {
			min = nilai[i];
			temp = i;
		}
		i++;
	}
	printf("%.2f %d %.3f\n",min,temp,sum/i);
	
	return 0;
}
