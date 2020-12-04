/* 
Program : Right_MFauziRH.c
Deskripsi : menampilkan N buah elemen terkanan dari array
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 4 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>

int main()
{
	/* Kamus */
	char S[255];
	int i, N, size;
	
	/* Algoritma */
	fgets(S, sizeof(S) + 1, stdin);
	scanf("%d", &N);
	
	for(size = 0; S[size]; size++);
	
	for(i = 0; S[i]; i++)
		S[i] = S[i + (size - 1)  - N];
	
	printf("%s\n", S);
	return 0;
}
