/* 
Program :  JumlahPecahan_MFauziRH.c
Deskripsi : mencari hasil penjumlahan pecahan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Februari 2021/ ver 0.2
Compiler : DevC+
+ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 45 Menit
*/

typedef struct {
	int pembilang;
	int penyebut;
}PECAHAN;

#include <stdio.h>
int main()
{
	/* Deklarasi */
	int i;
	PECAHAN x, y, sum;
	
	/* Algoritma */
	scanf("%d %d", &x.pembilang, &x.penyebut);
	scanf("%d %d", &y.pembilang, &y.penyebut);
	
	if(x.penyebut < y.penyebut) 
		i = x.penyebut;
	else
		i = y.penyebut;
		
	for(; i <= x.penyebut * y.penyebut; i++)
	{
		if(!(i%x.penyebut) && !(i%y.penyebut))
		{
			x.pembilang *= i/x.penyebut;
			y.pembilang *= i/y.penyebut;
			sum.pembilang = x.pembilang + y.pembilang;
			sum.penyebut = i;
			break;
		}
	}
	
	for(; i > 0; i--)
	{
		if(!(sum.pembilang%i) && !(sum.penyebut%i)){
			sum.pembilang /= i;
			sum.penyebut /= i;
		}
	}
	
	printf("%d %d\n", sum.pembilang, sum.penyebut);
	
	return 0;
}
