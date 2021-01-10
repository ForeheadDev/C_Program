/* 
Program :  DesimalBiner_MFauziRH.c
Deskripsi : mengubah bilangan desimal ke bilangan biner
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 28 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>


int main()
{
	/* Deklarasi */
	int bil, count = 0;
	int temp[32];
	int i;
	
	/* Algoritma */
	scanf("%d\n", &bil);
	
	i = 0;
	while(bil >= 1)
	{
		temp[i] = bil % 2;
		bil /= 2;
		i++;
		count++;
	}
	
	for(i = count - 1; i >= 0; i--)
		printf("%d", temp[i]);
		
	printf("\n");
	
	return 0;
}
