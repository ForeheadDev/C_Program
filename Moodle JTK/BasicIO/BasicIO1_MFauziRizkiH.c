/* Program : BasicIO1
Deskripsi : menampilkan bilagan dua kali lebih besar dari bilangan yang dimasukan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 1 Desember 2020 / / ver 0.2
Compiler : Dev-C++ 5.11
*/

#include <stdio.h>
int main()
{
	int number;
	
	scanf("%d", &number);
	
	if(number >= 0 & number <= 100)
	{
		number = number * 2;
	
		printf("%d\n", number);
	}
	
	return 0;
}
