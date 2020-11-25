/* Program : Latihan_2_2.c
Deskripsi : menerima inputan bilangan bulat, menyimpannya pada sebuah array 1 dimensi dan menampilkannya jika itu bilangan genap
Nama/NIM :
Tanggal :
Compiler :
*/
#include <stdio.h>
int main(){
	/* Deklrasi */
	int i;
	int ArrNumber[10];
	/* ALgoritma */
	printf("Masukkan 10 Bilangan :\n");
	for ( i = 0 ; i <= 8 ; i++)
	{
		scanf("%d",&ArrNumber[i]);
	}
	
	do 
	{
		if (ArrNumber[i] % 2 == 0)
		printf("%d ",ArrNumber[i]);
	} while(i < 10);
	
	return 0;
}
