#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int InputWithTime(int timeout)
{
	int startTime = clock();
	int elapsedTime;
	timeout *= 1000;
	
	do
	{
		if(kbhit())
		{
			return getch();
		}
		//startTime = clock() - startTime;	
		//elapsedTime = startTime / (CLOCKS_PER_SEC);
		//printf("%d", clock());
	}while(clock() < startTime + timeout);
	
	printf("\nno input found\n");
	return -1;
}


int main()
{
	int i;
	char a;
	/*
	do
	{
		i = InputWithTime(3);
		printf("%d", i);
		a = getch();
	}while(a != 'a');
	*/
	
	i = InputWithTime(5);
	printf("%d", i);
	
	i = InputWithTime(5);
	printf("%d", i);
	
	i = InputWithTime(5);
	printf("%d", i);
	
	
	
	return 0;
}
