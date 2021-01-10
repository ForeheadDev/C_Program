/* 
Program : Prima_MFauziRH.c
Deskripsi : menentukan suatu bilangan prima
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 5 Desember 2020/ ver 0.1
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	/* Deklarasi */
	int x, i;
	bool prima = true;
	
	/* Algoritma */
	scanf("%d", &x);
	
	if(x != 2 && x > 2) // mengecek bilangan > 2
	{ 
		i = 2;
		while(i < x && prima) // menetukan bilangan prima
		{
			if(x % i == 0)
				prima = false;
			i++;
		}
	}else if(x < 2) // mengecek bilangan < 2
	{
		prima = false;
	}
	
	if(prima == true)
		printf("prima\n");
	else
		printf("bukan prima\n");
	
	return 0;
}
