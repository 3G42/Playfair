#include <stdio.h>
#include <conio2.h>
#include <windows.h>
#include <conio.h>

// funçao para montar interface
void interf();

int main()
{
	system("MODE con cols=165 lines=60");//Define o tamanho da janela, se encontra na biblioteca windows.h
	int i;
	textcolor(11);
	gotoxy(72,25);
	printf(" T E T R I S");
	do{
	gotoxy(69, 30);
	printf("Aperte 5 para jogar");
	i = getch();
	}while(i!=53);
	interf();
	gotoxy(1,56);
	textcolor(BLACK);
	return 0;
}

void interf()
{
	int i, k;
	clrscr();
	gotoxy(79,1);
	printf("TETRIS\n");
	for(i=0;i<165;i++)
	{
		printf("\xC4");
	}
	gotoxy(1, 55);
	for(i=0;i<165;i++)
	{
		printf("\xC4");
	}
	gotoxy(66,4);
	for(i=0;i<30;i++)
	{
		printf("\xCD");
	}
	gotoxy(66,53);
	for(i=0;i<30;i++)
	{
		printf("\xCD");
	}
	gotoxy(66, 4);
	printf("\x005\n");
	gotoxy(96, 4);
	printf("\x005\n");
	for(i=0, k = 5;i<48;i++,k++)
	{
		gotoxy(66, k);
		printf("\xBA");
	}
	for(i=0, k = 5;i<48;i++,k++)
	{
		gotoxy(96, k);
		printf("\xBA");
	}
	gotoxy(66, 53);
	printf("\x005\n");
	gotoxy(96, 53);
	printf("\x005\n");
	textcolor(9);
	gotoxy(25, 4);
	printf("Proximo bloco:");
	gotoxy(30, 6);
	for(i=0;i<14;i++)
	{
		printf("\xCD");
	}
	gotoxy(30, 16);
	for(i=0;i<14;i++)
	{
		printf("\xCD");
	}
	for(i=0, k = 7;i<9;i++,k++)
	{
		gotoxy(29, k);
		printf("\xBA");
	}
	for(i=0, k = 7;i<9;i++,k++)
	{
		gotoxy(44, k);
		printf("\xBA");
	}
	gotoxy(29,6);
	printf("\x005\n");
	gotoxy(29, 16);
	printf("\x005\n");
	gotoxy(44, 6);
	printf("\x005\n");
	gotoxy(44, 16);
	printf("\x005\n");
	
	
	gotoxy(106,4);
	printf("Pontua\x87\x84o: ");
	gotoxy(106, 20);
	printf("Nivel: ");
	
}
