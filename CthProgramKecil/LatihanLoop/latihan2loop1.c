/* Program : Latihan_2_1.c
Deskripsi : menerima inputan sebuah bilangan bulat, menampilkan bilangan yang di inputkan jika bilangan merupakan bilangan genap
Nama/NIM : Muhammad Fauzi Rizki Hamdalah
Tanggal : 22 November 2020
Compiler : Dev-C++ 5.11
*/
#include <stdio.h>
int main()
{
	//Deklarasi
	int i;
	int number;
	//Algoritma
	printf("Masukkan 10 Bilangan :\n");
	for ( i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&number);
		if(number % 2 == 0 )
		printf("%d\n",number);
	}
	return 0;
}
