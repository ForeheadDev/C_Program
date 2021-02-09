#include <stdio.h>
#include <time.h>

int main()
{
	int x;
	clock_t timer = 0;
	timer = clock();
	int endWhite = 5000;
	do
	{
		printf("enter a number : ");
		scanf("%d", &x);
		timer = clock() - timer();
	} while(timer );
	
	timer = clock() - timer;
	timer = timer / (CLOCKS_PER_SEC);
	printf("\ntimer end in : %d", timer);
	
	return 0;
}
