/* 
Program :  Barisan1_MFauziRH.c
Deskripsi : Membuat pola barisan
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015 [Euclidean]
Tanggal : 25 Januari 2021/ ver 0.2
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu pengerjaan: +- 15 Menit
*/
#include <stdio.h>

int main()
{
	/* Deklarasi */
	int barisBilangan[15], startNum, i, temp;
	
	/* Algoritma */
	// Error aneh ketika inputan dibawah -60
	//scanf("%d", &startNum);
	//barisBilangan[0] = startNum;
	
	scanf("%d", &startNum);
	temp = startNum; // solusi aneh dengan memindahkan ke variabel lain, nilai jadi bisa dipakai
	barisBilangan[0] = temp;
	for(i = 1; i < 15; i+=3)
	{
		barisBilangan[i] = barisBilangan[i-1] + 3;
		barisBilangan[i+1] = barisBilangan[i] + 4;
		barisBilangan[i+2] = barisBilangan[i+1] + 5;
	}
	
	printf("%d", barisBilangan[0]);
	for(i = 1; i < 15; i++)
		printf(" %d", barisBilangan[i]);
	printf("\n");
	
	
	return 0;
}
