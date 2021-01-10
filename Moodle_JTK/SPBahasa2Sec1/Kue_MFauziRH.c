/* 
Program : Kue_MFauziRH.c
Deskripsi : menentukan apakah sebuah kue A dan B sama dilihat dari kesamaan komposisi terhadap N% 
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 8 Desember 2020/ ver 0.5
Compiler : DevC++ TDM-GCC 4.9.2 64-bit Release
*/
#include <stdio.h>

int arrayLen(char arr[]) // procedure to know the array lenght
{
	int len = 0;
	for(len = 0; arr[len]; len++);
	
	return len;
}

void printArray(char arr[], int n) // procedure to print array
{
	int i = 0;
	for(i = 0; i < n; i++)
		printf("%c ", arr[i]);
	printf("\n");
}

int main()
{
	float N, kesamaan = 0;
	char bahanA[255], bahanB[255];
	int sama = 0, count = 0;
	int i, j; // counter loop
	
	scanf("%f\n", &N);
	fgets(bahanA, sizeof(bahanA) + 1, stdin);
	fgets(bahanB, sizeof(bahanB) + 1, stdin);
	
	for(i = 0; bahanB[i]; i++)
	{
		if(bahanB[i] != ' ')
		{
			for(j = 0; bahanA[j]; j++)
			{
				if(bahanB[i] == bahanA[j])
				{
					bahanA[j] = ' ';
					sama++;
				}
			}
			count++;
		}
	}
	
	kesamaan = (float) sama / count * 100;

	if(kesamaan >= N)
		printf("sama");
	else
		printf("tidak sama");
	
	//printArray(bahanA, arrayLen(bahanA));
	//printArray(bahanB, arrayLen(bahanB));
	
	return 0;
}

