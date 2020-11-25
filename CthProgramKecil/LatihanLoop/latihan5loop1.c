/* Program : Latihan_5.c
Deskripsi :
Nama/NIM : Muhammad Fauzi Rizki Hamdalah/201524015
Tanggal : 24 November 2020
Compiler : Dev-C++ 5.11
*/
#include <stdio.h>
int main(){
	/* Deklrasi */
	int i,count1,count2,sum1,sum2;
	int address1[10];
	int address2[10];
	int numbers[10];
	count1 = count2 = sum1 = sum2 = 0;
	/* ALgoritma */
	printf("Masukkan Bilangan :\n");
	for ( i = 0 ; i < 10 ; i++)
		scanf("%d",&numbers[i]);
	i = 0;
	do {
	if(numbers[i] % 2 == 0)
	{
	 	address1[count1] = i;
		count1++;
		sum1 += numbers[i];
	}
	else 
	{
		address2[count2]= i;
		count2++;
		sum2 += numbers[i];
	}
	i++;
	} while (i < 10);
	printf("Deret Bilangan yang Telah dimasukkan :\n");
	for ( i = 0 ; i < 10 ; i++)
	 	printf("%d, ",numbers[i]);
	printf("\nDeret Bilangan 1 ________ :\n");
	for ( i = 0 ; i < count1 ; i++)
	 	printf("%d,",numbers[address1[i]]);
	printf("\nDeret Bilangan 2 ________ :\n");
	for ( i = 0 ; i < count2 ; i++)
	 printf("%d, ",numbers[address2[i]]);

	printf("\n%d - %d", count1, count2);
	return 0;
}
