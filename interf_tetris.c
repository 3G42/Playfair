#include <stdio.h>
#include <conio2.h>
#include <windows.h>
#include <conio.h>

// funçao para montar interface
void interf();

int main()
{
	system("MODE con cols=30 lines=40");//Define o tamanho da janela, se encontra na biblioteca windows.h
	int i;
	textcolor(11);
	gotoxy(10,17);
	printf(" T E T R I S");
	do{
	gotoxy(7, 20);
	printf("Aperte 5 para jogar");
	i = getch();
	}while(i!=53);
	interf();
	gotoxy(1,30);
	textcolor(BLACK);
	return 0;
}

void interf()
{
	int i, k;
	clrscr();
	gotoxy(13,1);
	textcolor(9);
	printf("TETRIS\n");
	for(i=0;i<30;i++)
	{
		printf("\xC4");
	}
	gotoxy(2,4);
	for(i=0;i<10;i++)
	{
		printf("\xCD");
	}
	gotoxy(2,28);
	for(i=0;i<10;i++)
	{
		printf("\xCD");
	}
	gotoxy(1, 4);
	printf("\x005\n");
	gotoxy(12, 4);
	printf("\x005\n");
	for(i=0, k = 5;i<23;i++,k++)
	{
		gotoxy(1, k);
		printf("\xBA");
	}
	for(i=0, k = 5;i<23;i++,k++)
	{
		gotoxy(12, k);
		printf("\xBA");
	}
	gotoxy(1, 28);
	printf("\x005\n");
	gotoxy(12, 28);
	printf("\x005\n");
	textcolor(10);
	gotoxy(17, 4);
	printf("Proximo bloco:");
	gotoxy(17,10);
	printf("Pontua\x87\x84o: ");
	gotoxy(17, 14);
	printf("Nivel: ");
}
