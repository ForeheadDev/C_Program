/* 
Program :  ArrayPoint_MFauziRH.c
Deskripsi : memeriksa kesamaan array point
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 14 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;


int main()
{
	/* Deklarasi */
	Point M[5];
	Point N[5];
	int i;
	
	/* Algoritma */
	for(i = 0; i < 5; i++)
	{
		scanf("%d %d\n", &M[i].x, &M[i].y);
	}
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d %d\n", &N[i].x, &N[i].y);
	}
	
	for(i = 0; i < 5; i++)
	{
		if(M[i].x != N[i].x || M[i].y != N[i].y)
			break;
	}
	
	if(i < 5)
		printf("tidak sama\n");
	else
		printf("sama\n");
	
	return 0;
}
