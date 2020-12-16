/* 
Program :  Challange02_MFauziRH.c
Deskripsi : mentransformasi titik P ke titik Q dengan pergerakan minimal
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
	Point P, Q;
	int step = 0;
	
	/* Algoritma */
	scanf("%d %d\n", &P.x, &P.y);
	scanf("%d %d\n", &Q.x, &Q.y);
	
	while(P.x != Q.x && P.y != Q.y){
	
	}
	printf("%d\n", step);
	
	return 0;
}
