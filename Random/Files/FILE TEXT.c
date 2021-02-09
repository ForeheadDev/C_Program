#include <stdio.h>
#include <conio.h>

main()
{
	int i=0;
	int count=0;
	FILE *FF; //penunjuk ke file
	char CC; //var penunjuk karakter yang dibaca
	char cek[255];
	system("cls");
	if((FF=fopen("contoh.TXT","rb"))== NULL) //Buka file mode baca
	{
	 printf("Pembukaan File Gagal !");
	 return 0; //keluar program
	}
	CC=getc(FF);
	cek[i]=CC;
	i++;
	putch(CC); //baca dan tampilkan ke layar
	
	while((CC=getc(FF))!=EOF) //CC akan berisi karakter yg dibaca
	{ //akhir teks dengan EOF = END OF FILE
		cek[i]=CC;
		i++;
	 	putch(CC); //baca dan tampilkan ke layar
	}
	fclose(FF);
	printf("\n");
	
	/*for(i=0; cek[i]; i++){
	 	if(cek[i]=='i'){
	 		count++;
		}
		printf("%c", cek[i]);
	}// jumlah huruf*/
	
	/*for(i=0; cek[i]; i++){
	 	if(cek[i-1]!='i'&&cek[i]=='i'&&cek[i+1]=='i'&&cek[i+2]!='i'){
	 		count++;
		}
		printf("%c", cek[i]);
	}//jumlah couple*/
	
	for(i=0; cek[i]; i++){
	 	if(cek[i]=='d'&&cek[i+1]=='i'&&cek[i+2]=='m'&&cek[i+3]=='a'&&cek[i+4]=='s'){
	 		count++;
		}
		printf("%c", cek[i]);
	}//jumlah kata
	printf("\n%d ", count);
	getch();
	return 0;
}
