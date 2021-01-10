/* 
Program : Juara_MFauziRH.c
Deskripsi : menenampilkan orang-orang yang menjuari 2 lomba sekaligus secara decending dari kejuaraan catur dan badminton
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
	int jmlJuaraCatur, jmlJuaraBadminton, jmlSangJuara = 0;
	int i, j, count = 0;
	char key[255];
	
	/* Algoritma */
	scanf("%d\n", &jmlJuaraCatur);
	char juaraCatur[jmlJuaraCatur][255];
	
	for(i = 0; i < jmlJuaraCatur; i++)
		fgets(juaraCatur[i], 255, stdin);
		
	scanf("%d\n", &jmlJuaraBadminton);
	char juaraBadminton[jmlJuaraBadminton][255];
	
	for(i = 0; i < jmlJuaraBadminton; i++)
		fgets(juaraBadminton[i], 255, stdin);
	
	if(jmlJuaraCatur < jmlJuaraBadminton)
		jmlSangJuara = jmlJuaraCatur;
	else
		jmlSangJuara = jmlJuaraBadminton;
	
	char sangJuara[jmlSangJuara][255];
	
	for(i = 0; i < jmlJuaraCatur; i++)
	{
		for(j = 0; j < jmlJuaraBadminton; j++)
		{
			if(strcmp(juaraCatur[i], juaraBadminton[j]) == 0)
			{
				strcpy(sangJuara[count], juaraBadminton[j]);
				count++;
				break;
			}
		}
	}
	
	if(count == 0)
		printf("tidak ada sang juara\n");
	else
	{
		
		for(i = 1; i < jmlSangJuara; i++)
		{
			j = i;
			while(j > 0 && strcmp(sangJuara[j-1],sangJuara[j]) == -1)
			{
				strcpy(key, sangJuara[j]);
				strcpy(sangJuara[j], sangJuara[j-1]);
				strcpy(sangJuara[j-1], key);
			j--;
			}
		}
		
		
		for(i = 0; i < jmlSangJuara; i++)
		{
			printf("%s", sangJuara[i]);
		}
		
	}
	
	
	return 0;
}
