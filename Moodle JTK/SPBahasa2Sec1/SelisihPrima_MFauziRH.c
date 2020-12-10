/* 
Program : Prima_MFauziRH.c
Deskripsi : menentukan selisih bilangan prima terbesar dan terkecil di range x hingga y
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	/* Deklarasi */
	int x, y, i, j, min, max;
	bool prima;
	
	/* Algoritma */
	scanf("%d %d", &x, &y);
	max = x;
	min = y;
	
	for(i = x; i <= y; i++)
	{
		prima = true;
		if(i != 2 && i > 2) // mengecek bilangan > 2
		{ 
			j = 2;
			while(j < i && prima) // menetukan bilangan prima
			{
				if(i % j == 0)
					prima = false;
				j++;
			}
		}else if(i < 2) // mengecek bilangan < 2
		{
			prima = false;
		}
		
		if(prima == true)
		{
			if(max < i)
				max = i;
			
			if(min > i)
				min = i;
		}
			
	}
	printf("%d\n", max - min);
	return 0;
}
