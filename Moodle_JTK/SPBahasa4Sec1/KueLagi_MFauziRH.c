/* 
Program : KueLagi_MFauziRH.c
Deskripsi : menentukan apakah sebuah kue A dan B sama dilihat dari kesamaan komposisi terhadap N% 
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 6 Januari 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
Waktu : +- 30 menit
*/
#include <stdio.h>
#include <string.h>

int main()
{
	/* Deklarasi */
	float N, kesamaan = 0;
	int jmlBahanA, jmlBahanB;
	int count = 0;
	int i, j; // counter loop
	
	/*Algoritma*/
	scanf("%f\n", &N);
	
	scanf("%d\n", &jmlBahanA);
	char bahanA[jmlBahanA][10];
	for(i = 0; i < jmlBahanA; i++)
	{
		scanf("%s\n", &bahanA[i]);
	}
	
	scanf("%d\n", &jmlBahanB);
	char bahanB[jmlBahanB][10];
	for(i = 0; i < jmlBahanB; i++)
	{
		scanf("%s\n", &bahanB[i]);
	}
	
	for(i = 0; i < jmlBahanA; i++)
	{
		for(j = 0; j < jmlBahanB; j++)
		{
			if(strcmp(bahanA[i], bahanB[j]) == 0)
			{
				count++;
				break;
			}
		}
	}
	
	kesamaan = (float) count / jmlBahanB * 100;

	if(kesamaan >= N)
		printf("sama");
	else
		printf("tidak sama");
	
	
	return 0;
}

