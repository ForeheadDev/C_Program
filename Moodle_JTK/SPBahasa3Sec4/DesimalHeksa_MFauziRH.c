/* 
Program :  DesimalHeksa_MFauziRH.c
Deskripsi : mengubah bilangan desimal ke bilangan heksadesimal
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 29 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/

#include <stdio.h>
#include <string.h>

int main()
{
	/* Deklarasi */
	int desimal;
	char base[17] = {"0123456789ABCDEF"};
	int temp[32];
	int i;
	int count;
	
	/* Algoritma */
	scanf("%d\n", &desimal);
	
	count = 0;
	while(desimal >= 1)
	{
		temp[count] = base[(desimal % 16)]; // mencari hasil bagi
		desimal /= 16;
		count++;
	}
	
	for(i = count - 1; i >= 0; i--) // menampilkan dari belakang
		printf("%c", temp[i]);
	
	printf("\n");
	
	return 0;
}
