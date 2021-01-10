#include <stdio.h>
int main()
{
	char arr[21] = {"XOXOOXOXXOXOOXOXXOXO\0"};
	int i, j;
	int x, y, z;
	int state = 0;
	

	
	scanf("%d %d %d\n", &x, &y, &z);

	if(arr[x -1] != 'X')
	{
		arr[x-1] = 'V';
		if(arr[y-1] != 'X')
		{
			arr[y-1] = 'V';
			if(arr[z-1] != 'X')
			{
				arr[z-1] = 'V';
			} else
			{
				state = 1;
			}
		}else 
		{
			state = 1;
		}
	}else{
		state = 1;
	}
	
	if(state == 0)
	{
		for(i = 0; i< 20; i ++)
		{
			printf("%c ", arr[i]);
			if(i + 1 == 4 || i + 1 == 8 || i + 1 == 12|| i + 1 == 16 || i + 1 == 20 )
				printf("\n");
		}
	}else
	{
		printf("tidak tersedia\n");
	}
	
	return 0;
}
