/* 
Program :  PointCircle_MFauziRH.c
Deskripsi : memeriksa posisi pada suatu lingkaran
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 14 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

int toPower(int num, int eks)
{
	int i;
	int result = 1;
	
	for(i = 0; i < eks; i++)
		result *= num;
	
	return result;
}

int main()
{
	/* Deklarasi */
	int r, equation = 0;
	Point center, custom;
	
	/* Algoritma */
	scanf("%d %d\n", &center.x, &center.y);
	scanf("%d\n", &r);
	scanf("%d %d\n", &custom.x, &custom.y);
	
	
	if(center.x == custom.x && center.y == custom.y)
	{
		printf("tepat pada titik pusat\n");
	}else
	{
		equation = toPower((center.x - custom.x), 2) + toPower((center.y - custom.y), 2);
		
		if(equation < toPower(r,2))
		{
			printf("di dalam lingkaran\n");
		}else if(equation == toPower(r, 2))
		{
			printf("tepat pada lingkaran\n");
		}else
		{
			printf("di luar lingkaran\n");
		}
	}
		
	
	return 0;
}
