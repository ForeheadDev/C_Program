/* 
Program : Celcius To Fahrenheit
Deskripsi : mengkonversi suhu dalam celcius ke fahrenheit
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 30 November 2020/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Realise
Catatan F = C * 1,8 + 32
*/
#include <stdio.h>
#include <math.h>

int main ()
{
	/* Kamus Data */
	float celcius, fahrenheit;
	
	/* Algoritma */
	scanf("%f", &celcius);
	
	if(celcius >= -100 && celcius =< 100)
	{
		fahrenheit = celcius * 1.8 + 32;
	
		printf("%.2f\n", fahrenheit);
	}
	
	return 0;
}
