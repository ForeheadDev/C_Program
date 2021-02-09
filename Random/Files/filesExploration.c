#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	FILE *FPointer;
	char playerName[12];
	int timeConsume, i;
	char c;
	
	FPointer = fopen("rules.dat", "r");
	
	if(FPointer == NULL)
	{
		printf("Unable To Create the file\n\n\n");
		return 0;
	}else
		printf("file opened successfully\n");
	
	while(!feof(FPointer))
	{
		c = fgetc(FPointer);
		printf("%c", c);
	}
	
	fclose(FPointer);
	
	return 0;
}
