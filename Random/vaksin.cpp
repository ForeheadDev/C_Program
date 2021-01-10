#include <stdio.h>
int main()
{
	int N;
	int i;
	char temp;
	int K = 0, A = 0, P = 0;
	
	scanf("%d\n", &N);
	for(i = 0; i< N; i++) 
	{
		if(i != N-1)
		{
			scanf("%c ", &temp);
		}else
		{
			scanf("%c", &temp);
		}
		
		if(temp == 'K')
			K++;
		else if(temp == 'A')
			A++;
		else if (temp == 'P')
			P++;
	}
	
	printf ("K %d\n", K);
	printf ("A %d\n", A);
	printf ("P %d\n", P);
	
	return 0;
}
