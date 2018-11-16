#include <stdio.h>
#include <conio2.h>
#include <windows.h>
#include <conio.h>
//Interface game over

int main()
{
		system("MODE con cols=165 lines=60");//Define o tamanho da janela, se encontra na biblioteca windows.h
		int i, j;
		textcolor(10);
		gotoxy(73,25);
		printf("G A M E  O V E R");
		gotoxy(1,24);
		for(i=0;i<165;i++)
		{
			printf("\xC4");
		}
		gotoxy(1,26);
		for(i=0;i<165;i++)
		{
			printf("\xC4");
		}
		gotoxy(60,35);
		printf("RECORDES: ");
		gotoxy(70,37);
		printf("1\xF8 -");
		gotoxy(70,39);
		printf("2\xF8 -");
		gotoxy(70,41);
		printf("3\xF8 -");
		gotoxy(70,43);
		printf("4\xF8 -");
		gotoxy(70,45);
		printf("5\xF8 -");
		gotoxy(1,56);
		textcolor(BLACK);
		return 0;
}
