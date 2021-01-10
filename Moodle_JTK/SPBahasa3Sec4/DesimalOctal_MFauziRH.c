/* 
Program :  DesimalOctal_MFauziRH.c
Deskripsi : mengubah bilangan desimal ke bilangan octal
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 29 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 5 Menit
*/

#include <stdio.h>

int main()
{
	/* Deklarasi */
	int desimal;
	int temp[32];
	int i;
	int count;
	
	/* Algoritma */
	scanf("%d\n", &desimal);
	
	count = 0;
	while(desimal >= 1)
	{
		temp[count] = desimal % 8; // mencari hasil bagi
		desimal /= 8;
		count++;
	}
	
	for(i = count - 1; i >= 0; i--) // menampilkan dari belakang
		printf("%d", temp[i]);
	
	printf("\n");
	
	return 0;
}
