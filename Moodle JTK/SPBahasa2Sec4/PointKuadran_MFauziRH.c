/* 
Program :  PointKuadran_MFauziRH.c
Deskripsi : menghitung jumlah kemunculan titik di kuadran N
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
	/* Pra-Deklarasi */
	int amount;
	scanf("%d\n", &amount);
	
	/* deklarasi */
	Point M[amount];
	int i; // counter array
	int N; // kuadran
	int count = 0;
	
	/* Algoritma */
	for(i = 0; i < amount; i++) 
	{
		scanf("%d %d\n", &M[i].x, &M[i].y); // inputing point
	}
	
	scanf("%d\n", &N); // input kuadran
	
	switch(N) // menghitung kemunculan titik pada kuadran
	{
		case 1:
			for(i = 0; i < amount; i++)
			{
				if(M[i].x > 0 && M[i].y > 0)
					count++;
			}
			break;
		case 2:
			for(i = 0; i < amount; i++)
			{
				if(M[i].x < 0 && M[i].y > 0)
					count++;
			}
			break;
		case 3:
			for(i = 0; i < amount; i++)
			{
				if(M[i].x < 0 && M[i].y < 0)
					count++;
			}
			break;
		case 4:
			for(i = 0; i < amount; i++)
			{
				if(M[i].x > 0 && M[i].y < 0)
					count++;
			}
			break;
	}
	
	printf("%d\n", count);
	
	return 0;
}
