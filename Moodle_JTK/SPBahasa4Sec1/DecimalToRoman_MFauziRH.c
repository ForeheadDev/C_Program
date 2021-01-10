/* 
Program :  DecimalToRoman_MFauziRH.c
Deskripsi : mengubah bilangan desimal ke bilangan romawi
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 4 Januari 2021/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 30 Menit
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int decimal;
	
	/* Algoritma */
	scanf("%d\n", &decimal);
	
	while(decimal != 0)
	{
		if(decimal >= 1000)
		{
			printf("M");
			decimal -= 1000;
		}else if (decimal >= 900)
		{
			printf("CM");
			decimal -= 900;
		}
		else if(decimal >= 500)
		{
			printf("D");
			decimal -= 500;
		}else if(decimal >= 400)	
		{
			printf("CD");
			decimal -= 400;
		}
		else if(decimal >= 100)
		{
			printf("C");
			decimal -= 100;
		}else if(decimal >= 90)
		{
			printf("XC");
			decimal -= 90;
		}
		else if(decimal >= 50)
		{
			printf("L");
			decimal -= 50;
		}else if(decimal >= 40)
		{
			printf("XL");
			decimal -= 40;
		}
		else if(decimal >= 10)
		{
			printf("X");
			decimal -= 10;
		}
		else if(decimal >= 9)
		{
			printf("IX");
			decimal -= 9;
		}
		else if(decimal >= 5)
		{
			printf("V");
			decimal -= 5;
		}
		else if(decimal >= 4)
		{
			printf("IV");
			decimal -= 4;	
		}else if(decimal >= 1)
		{
			printf("I");
			decimal -= 1;
		}
	}
	printf("\n");
	
	return 0;
}
