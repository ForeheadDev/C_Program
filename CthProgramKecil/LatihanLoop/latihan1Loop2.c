/* Program : loop2.c
Deskripsi : menerima inputan bilangan, menampilkan jumlah perulangan dan total nilai bilangan yang telah di inputkan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah
Tanggal : 22 November 2020
Compiler : Dev-C++ 5.11
1. Apa yang akan dilakukan oleh program ini?
2. Pertanyaan Tuliskan lesson learned dari program ini
*/

#include <stdio.h>
int main()
{
	//deklarasi
	int number,sum = 0;
	int count = 0;
	/* Repeat Until:blok intruksi di dalam loop minimal dibaca nilai satu kali */
	do
	{
		printf("Masukan nilai = ");
		scanf("%d", &number);
		count++;
		sum = sum + number;
	}while(number != 0); //pembacaan data berakhir jika nilai yang dibaca = 0
	
	printf("\n\nCount = %d", count);
	printf("\nSum = %d", sum);
	
	return 0;
}
