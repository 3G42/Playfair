//playfair
#include <stdio.h>
#include <conio2.h>
#include <string.h>

//clrscr(); apaga tudo
void preenche_palavra(char palavra[]);
void preenche_chave(char frase[]);
void criptografar(char matriz[][5], char palavra[], char frase[]);

int main()
{
	int i, n, cont=1, flag=0, flag2=0;
	char palavra[26], chave[26], matriz[5][5];
	textcolor(YELLOW);
	textbackground(RED);
	gotoxy(1,1);
	printf("\xC9");
	for(i=0;i<78;i++)
	{
		printf("\xCD");
	}
	printf("\xBB");
	gotoxy(1,2);
	printf("\xBA                               CIFRA PLAYFAIR                                 \xBA");
	gotoxy(1,3);
	printf("\xC8");
	for(i=0;i<78;i++)
	{
		printf("\xCD");
	}
	printf("\xBC");
	textcolor(WHITE);
	gotoxy(1,4);
	textbackground(BLACK);
	printf("[1] Inserir uma palavra\n[2] Inserir uma chave\n[3] Criptografar a palavra inserida\n[4] Descriptografar a palavra inserida\n[5] Limpar tudo\n[6] Sair do programa\n\n");
	textcolor(YELLOW);
	for(i=0;i<79;i++)
	{
		printf("\xC4");
	}
	textcolor(WHITE);
	printf("\nOp\x87\xc6o:            ");
	printf("STATUS: ");
	printf("\nFrase: ");
	printf("\nChave: ");
	printf("\nResultado: ");
	printf("                       ");
	textbackground(RED);
	textcolor(YELLOW);
	gotoxy(35,15);
	printf("M A T R I Z");
	gotoxy(76,15);
	textbackground(BLACK);
	gotoxy(1,16);

	printf("                               ");
	printf("\xDA");
	for(i=0;i<15;i++)
	{
		printf("\xC4");
	}
	printf("\xBF\n");
	for(i=0;i<8;i++)
	printf("                               \xB3               \xB3\n");
	printf("                               \xC0");
	for(i=0;i<15;i++)
	{
		printf("\xC4");
	}
	printf("\xD9");
	gotoxy(8,12);
	textcolor(BLUE);
	scanf("%d", &n);
	switch(n)
	{
		case 1:
			gotoxy(8,13);
			preenche_palavra(palavra);
			flag++;
			break;
			
		case 2:
			gotoxy(8,14);
			preenche_chave(chave);
			flag2++;
			break;
		
		case 3:
			if(flag != 0 && flag2 != 0)
			{
				criptografar(matriz, palavra, chave);
			}
			else
				printf("ERRO! - Digite uma frase e uma chave");
		
	}
	textcolor(BLACK);
	gotoxy(25,25);
	return 0;
}
void preenche_palavra(char palavra[])
{
	int i, j;
	scanf("%s", palavra);
	for(i=0;palavra[i] != '\0'; i++)
	{
		palavra[i] = toupper(palavra[i]);
	}
    for(i=0; i < strlen(palavra); i++)
        while(palavra[i] == ' ')
		{
            for(j=i; j < strlen(palavra); j++)
            {
                palavra[j] = palavra[j+1];
        	}
        }
    gotoxy(27,12);
    printf("palavra a ser criptografada inserida");
}

void preenche_chave(char chave[])
{
	int i, j;
	scanf("%s", chave);
	for(i=0;chave[i] != '\0'; i++)
	{
		chave[i] = toupper(chave[i]);
		
    for(i=0; i < strlen(chave); i++)
        while(chave[i] == ' ')
		{
            for(j=i; j < strlen(chave); j++)
            {
                chave[j] = chave[j+1];
        	}
        }
	}
	gotoxy(27,12);
    printf("palavra a ser criptografica inserida");
}

void criptografar(char matriz[][5], char palavra[], char frase[])
{
	
	
}