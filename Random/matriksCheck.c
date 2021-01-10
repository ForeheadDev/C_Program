#include <stdio.h>
int main()
{
	char arr[3][3] =
	{
		{'X', 'X', 'X'},
		{'X', 'X', 'X'},
		{'X', 'X', 'X'},
	};
	int i,j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%c ", arr[i][j]);
		
		printf("\n");
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 1; j < 2 ;j++)
		{
			if(arr[i][j-1] != arr[i][j])
				break;
		}
		if(j == 2)
		{
			printf("streak");
			break;
		}
	}
	
	return 0;
}
