/* 
Program : CountPrima_MFauziRH.c
Deskripsi : menghitung jumlah bilangan prima di dalam array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	/* Deklarasi */
	int bil[10];
	int i, j, count = 0;
	bool prima;
	
	/* Algoritma */
	scanf("%d", &bil[0]);
	for(i = 1; i < 10; i++)
	{
		scanf(" %d", &bil[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		prima = true;
		if(bil[i] != 2 && bil[i] > 2) 
		{ 
			j = 2;
			while(j < bil[i] && prima)
			{
				if(bil[i] % j == 0)
					prima = false;
				j++;
			}
		}else if(bil[i] < 2) 
		{
			prima = false;
		}
	
		if(prima == true)
			count++;
	}
	
	printf("%d\n", count);	
	
	return 0;
}
