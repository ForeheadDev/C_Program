#include <stdio.h>

int main()
{
	int i;
	srand(time(NULL));
	for(i = 0; i < 10; i++)
	{
		int r = rand() % 3;
	
		printf("%d ", r);
	}
	printf("\n");
	srand(time(NULL));
	for(i = 0; i < 10; i++)
	{
		int r = rand() % 5;
	
		printf("%d ", r);
	}
	
	
	return 0;
}
