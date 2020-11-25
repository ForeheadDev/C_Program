/* Program : Latihan_1_2.c
Deskripsi : menerima inputan sebuah bilangan bulat, memasukan bilangan tersebut kedalam array 
Nama/NIM : Muhammad Fauzi Rizki Hamdalah
Tanggal : 22 November 2020
Compiler : Dev-C++ 5.11
Pertanyaan :
1. Apa yang akan dilakukan oleh program ini ?
2. Apa yang terjadi jika nilai count sudah mencapai >= 199 ?
3. Tuliskan lesson learned dari program ini….
*/

#include <stdio.h>
int main()
{
	//deklarasi
	int number, count = 197;
	int ArrNumber[200];
	scanf("%d", &number);
	ArrNumber[count] = number;
	while(number != -99)
	{
		count++;
		scanf("%d", &number);
		ArrNumber[count] = number;
	}//akan keluar dari perulangan jika number = -99
	
	int i;
	for(i = 197; i < count; i++)
	{
		printf("%d", ArrNumber[i]);
	}
	printf("\nCount : %d", count);
	return 0;
}
