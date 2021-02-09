/* 
Program :  MenukarDuaAngka_MFauziRH.c
Deskripsi : menukar nilai pada dua angka pada variabel
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/
#include <stdio.h>

void SwapValue(int *x, int *y);

int main()
{
	/* Kamus Data */
	int number1, number2;
	
	/* Algoritma */
	scanf("%d %d", &number1, &number2);
	
	SwapValue(&number1, &number2);
	
	printf("%d %d\n", number1, number2);
	
	return 0;
}

void SwapValue(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
