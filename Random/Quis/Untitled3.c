#include <stdio.h>

#include <stdbool.h>

#define arrLen 10



typedef struct {

	int x;

	int y;

}POINT;



bool Is2ArraySama(POINT arrA[], POINT arrB[])

{

	int i;

	for(i = 0; i < arrLen; i++)

	{

		if(arrA[i].x != arrB[i].x || arrA[i].y != arrB[i].y)

			return false;

	}

	return true;

}



POINT buatTitik()

{

	POINT titik;

	scanf("%d %d", &titik.x, &titik.y);

	

	return titik;

}



int main()

{

	POINT arrA[arrLen], arrB[arrLen];

	int i;

	

	for(i = 0; i < arrLen; i++)

		arrA[i] = buatTitik();

	

	for(i = 0; i < arrLen; i++)

		arrB[i] = buatTitik();

	

	if(Is2ArraySama(arrA, arrB))

		printf("Array Sama\n");

	else

		printf("Array Berbeda\n");

	

}
