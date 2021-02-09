#include <stdio.h>
#include <string.h>
#define NameLength 13

int main()
{
	char buffer[255], name[NameLength];
	int inputLen;

	do
	{
		if(inputLen < 1 || inputLen > NameLength - 1)
			printf("Masukan minimal 4 karakter dan maximal 12 karakter\n");

		fflush(stdin); // membersihkan inputan sebelumnnya
		printf("Masukan Nama : ")
		fgets(buffer, 255, stdin);	
		inputLen = strlen(buffer); // menghitung panjang inputan
		buffer[inputLen - 1] = '\0'; // mengambil default \n dari fgets
	}while(inputLen < 5 || inputLen > NameLength - 1);
	strncpy(name, buffer, NameLength - 1);
	
	printf("%s", name);
	return 0;
}
