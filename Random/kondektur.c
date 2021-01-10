#include <stdio.h>
int main()
{
	char arr[5][4];
	int i,j;
	int ongkos = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%c %c %c %c\n", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(arr[i][j] == 'X')
				ongkos += 50000; 
		}
	}
	
	printf("%d", ongkos);
	
	return 0;
}
