/* Program : loop1.c
Deskripsi : menerima inputan sebuah nilai bilangan bulat secara terus-menerus hingga bilangan yang dimasukan bernilai -99
Nama/NIM : Muhammad Fauzi Rizki Hamdalah
Tanggal : 22 November 2020
Compiler : Dev-C++ 5.11
1. Apa yang akan dilakukan oleh program ini?
2. Pertanyaan Tuliskan lesson learned dari program ini
*/

#include <stdio.h>
int main()
{
	//Deklarasi
	int number, count = 0;
	
	//Algoritma
	number = 0;
	while(number != -99)
	{
		count++;
		scanf("%d", &number);
	} //akan keluar dari pengulangan jika number = -99
	
	return 0;
}
