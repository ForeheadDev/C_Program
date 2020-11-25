/* Program : Latihan_4.c
Deskripsi :
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 24 November 2020
Compiler : Dev-C++ 5.11
*/
#include <stdio.h>
int main()
{
	/* Deklrasi */
	int i,count = 0,sum = 0;
	int number;
	/* ALgoritma */
	while ( count < 2 )
	{
		scanf("%d",&number);
		if (number % 3 == 0)
		{
			if (number % 5 == 0)
			{
				 count++;
				 sum+=number;
			}
		}
	}
	
	printf ("%d %d", count, sum);
	return 0;
}
