#include <stdio.h>
#include <conio2.h>
#include <windows.h>
#include <conio.h>

// funçao para montar interface
void interf();

int main()
{
	system("MODE con cols=60 lines=57");//Define o tamanho da janela, se encontra na biblioteca windows.h
	int i;
	textcolor(11);
	gotoxy(24,25);
	printf(" T E T R I S");
	do{
	gotoxy(21, 30);
	printf("Aperte 5 para jogar");
	i = getch();
	}while(i!=53);
	interf();
	gotoxy(1,54);
	textcolor(BLACK);
	return 0;
}

void interf()
{
	int i, k;
	clrscr();
	gotoxy(29,1);
	printf("TETRIS\n");
	for(i=0;i<60;i++)
	{
		printf("\xC4");
	}
	gotoxy(2,4);
	for(i=0;i<30;i++)
	{
		printf("\xCD");
	}
	gotoxy(2,53);
	for(i=0;i<30;i++)
	{
		printf("\xCD");
	}
	gotoxy(1, 4);
	printf("\x005\n");
	gotoxy(31, 4);
	printf("\x005\n");
	for(i=0, k = 5;i<48;i++,k++)
	{
		gotoxy(1, k);
		printf("\xBA");
	}
	for(i=0, k = 5;i<48;i++,k++)
	{
		gotoxy(31, k);
		printf("\xBA");
	}
	gotoxy(1, 53);
	printf("\x005\n");
	gotoxy(31, 53);
	printf("\x005\n");
	textcolor(9);
	gotoxy(35, 4);
	printf("Proximo bloco:");
	gotoxy(35,14);
	printf("Pontua\x87\x84o: ");
	gotoxy(35, 20);
	printf("Nivel: ");
}
