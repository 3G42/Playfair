//playfair
#include <stdio.h>
#include <conio2.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//clrscr(); apaga tudo
void interface(char matriz[][5],int flag,int flag2, int flag3, int flag4,char matriz_cript[50][2],char palavra[50],int tamanhoVet);
void preenche_palavra(char frase[]);
void preenche_chave(char frase[],char aux[]);
void mat(char matriz[][5], char chave[]);
void excluir_casa(char palavra[], int tamanho_string, int posicao);
void adicionar_casa(char palavra[], int tamanho_string, int posicao);
int frase_agrupada(char frase[],char matriz[50][2]);
void criptografa(char matriz[50][2],char chave[5][5],char vet[]);

int main()
{
	int i, n=1,j, cont=1, flag=0,flag2 = 0,flag3 = 0,flag4=0, k=17,tamanhovet, x;
	char palavra[26], chave[40], matriz[5][5],aux[40],matriz_cript[50][2];
	interface(matriz,flag, flag2, flag3, flag4, matriz_cript, palavra,tamanhovet);
	while(n!=0)
    {
    	system("cls");
    	interface(matriz,flag , flag2, flag3, flag4, matriz_cript, palavra,tamanhovet);
        gotoxy(8,12);
        textcolor(BLUE);
        scanf("%d", &n);
        flag=0;
        flag2=0;
        flag3=0;
        flag4=0;

        switch(n)
        {
            case 1:
                gotoxy(8,13);
                preenche_palavra(palavra);
                gotoxy(27,12);
                gotoxy(30,30);
                x=frase_agrupada(palavra,matriz_cript);
                flag=1;
                break;

            case 2:
                gotoxy(8,14);
                preenche_chave(chave,aux);
                mat(matriz,aux);
                flag2=1;
                break;
            case 3:
                criptografa(matriz_cript,matriz,palavra);
                tamanhovet=strlen(aux)/2;
                flag2=1;
                flag3=1;
                break;
            	
            
            }
    }
	textcolor(BLACK);
	gotoxy(25,40);
	system("pause");
	return 0;
}

void interface(char matriz[][5],int flag,int flag2, int flag3, int flag4,char matriz_cript[50][2],char palavra[50],int tamanhoVet)
{
    int i, j, k=17;
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
	printf("                       ");
	textbackground(RED);
	textcolor(YELLOW);
	gotoxy(34,15);
	printf("M A T R I Z");
	gotoxy(76,15);
	textbackground(BLACK);
	gotoxy(1,16);

	printf("                               ");
	printf("\xDA");
	for(i=0;i<13;i++)
	{
		printf("\xC4");
	}
	printf("\xBF\n");
	for(i=0;i<5;i++)
	printf("                               \xB3             \xB3\n");
	printf("                               \xC0");
	for(i=0;i<13;i++)
	{
		printf("\xC4");
	}
	printf("\xD9");
	textcolor(WHITE);
	printf("\n\nResultado: ");
	textcolor(YELLOW);
	gotoxy(35,17);
	if(flag==1)
	{
		gotoxy(28, 12);
		printf("Palavra a ser criptografada inserida");
	}
	if(flag2 ==1)
	{
	    for(i=0;i<5;i++)
	    {
	        for(j=0;j<5;j++)
	            {
	                printf("%c ",matriz[i][j]);
	            }
	            k++;
	            gotoxy(35,k);
	            
	    }
	    gotoxy(28, 12);
		printf("Chave inserida");
	}
	if(flag3==1)
	{
		gotoxy(13,24);
		 for(i=0;i<tamanhoVet;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        printf("%c ",matriz_cript[i][j]);
                    }
                }
	}
}

void preenche_palavra(char frase[])
{
    int i, j, k, tamanho_string;
	fflush(stdin);
   	gets(frase);
	for(tamanho_string = 0; frase[tamanho_string] != '\0'; tamanho_string++);
	for(i=0;frase[i] != '\0'; i++)
	{
		frase[i] = toupper(frase[i]);
	}
	for(i = 0; i < tamanho_string; i++)
    {
		if(frase[i] == ' ')
		{
			excluir_casa(frase, tamanho_string, i);
			tamanho_string--;
			i--;
		}
	}
	for(i = 0; i < tamanho_string; i += 2)
	{
		if(frase[i] == frase[i+1])
		{
			adicionar_casa(frase, tamanho_string, i+1);
			i -= 2;
			tamanho_string++;
		}
		if(frase[i+1] == '\0')
		{
			adicionar_casa(frase, tamanho_string, i+1);
			i -= 2;
			tamanho_string++;
		}
	}
}

void preenche_chave(char chave[],char aux[])
{
	int i, j,num=0,flag=0;
	fflush(stdin);
	gets(chave);
	for(i=0;chave[i] != '\0'; i++)
	{
		chave[i] = toupper(chave[i]);
	}

	for (i=0;chave[i]!='\0';i++)
    {
        if(chave[i]>=65&&chave[i]<=90&&chave[i]!=74)
        {
            for(j=0;j<=num;j++)
            {
                if(chave[i]==aux[j])
                {
                    flag = 1;
                }
            }

            if(flag==0)
            {
                aux[num]=chave[i];
                num++;
            }
            else
            {
                flag=0;
            }
        }
    }
    aux[num] = '\0';
	gotoxy(27,12);
    printf("Chave inserida, matriz dde criptografia pronta.",chave,aux);
}

void mat(char matriz[5][5], char chave[])
{
    int i,j,k=0,n=0,flag = 0,flag2=1,flag3=0;
    char alf[1000];
    for(i=65,j=0;i<=90;i++)
    {
        if(i!=74)
        {
            alf[j]=i;
            j++;
        }
    }
    strcat(chave,alf);
    k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            flag2=1;
            while(flag2==1){
                if(n==0&&flag3==0)
                {
                    matriz[i][j]=chave[n];
                    flag2=0;
                    flag3=1;
                }
                else{
                    n++;

                    while(k<n)
                    {
                        if(chave[n]==chave[k])
                        {
                            flag=1;
                        }
                        k++;
                    }
                    if(flag==0)
                    {
                        matriz[i][j]=chave[n];
                        flag2=0;
                    }
                    k=0;
                    flag = 0;
                }
            }
        }
    }

}
void excluir_casa(char palavra[], int tamanho_string, int posicao)
{
	int cont;
	for(cont = posicao; cont < tamanho_string; cont++)
				palavra[cont] = palavra[cont+1];
}
void adicionar_casa(char palavra[], int tamanho_string, int posicao)
{
	int i;
	for(i = tamanho_string; i >= posicao; i--)
		palavra[i+1] = palavra[i];
	palavra[posicao] = 'X';
}
int frase_agrupada(char frase[],char matriz[50][2])
{
    int i,j,k,n, cont;
    n = strlen(frase);
    for(i=0,k=0;i<n && frase[k]>=65 && frase[k]<=90;i++)
    {
        for(j=0;j<2;j++)
        {
            matriz[i][j] = frase[k];
            k++;
        }
    }
}

void criptografa(char matriz[50][2],char chave[5][5],char vet[])
{
    int i,j,L1,L2,C1,C2,l,c,n,flagL=0,flagC=0;
    n = strlen(vet)/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            for(l=0;l<5;l++)
            {
                for(c=0;c<5;c++)
                {
                    if(matriz[i][j]==chave[l][c])
                    {
                        L1 = l;
                        C1 = c;
                    }

                }
            }
        }
        for(;j=1;)
        {
            for(l=0;l<5;l++)
            {
                for(c=0;c<5;c++)
                {
                    if(matriz[i][j]==chave[l][c])
                    {
                        L2 = l;
                        C2 = c;
                    }

                }

            }
            break;
        }
        if(L1==L2)
        {
            if(C1!=4&&C2!=4)
            {
                matriz[i][0]=chave[L1][C1+1];
                matriz[i][1]=chave[L1][C2+1];
            }
            else if(C1==4&&C2!=4)
            {
                matriz[i][0]=chave[L1][0];
                matriz[i][1]=chave[L1][(C2+1)];
            }
            else if(C1 != 4 && C2 == 4)
            {
                matriz[i][0]=chave[L1][C1+1];
                matriz[i][1]=chave[L1][0];
            }
        }
        else if(C1==C2)
        {
            if(L1!=4&&L2!=4)
            {
                matriz[i][0]=chave[L1+1][C1];
                matriz[i][1]=chave[L2+1][C2];
            }
            else if(L1!=4&&L2==4)
            {
                matriz[i][0]=chave[L1+1][C1];
                matriz[i][1]=chave[0][C2];
            }
            else if(L1==4&&L2!=4)
            {
                matriz[i][0]=chave[0][C1];
                matriz[i][1]=chave[L2+1][C2];
            }
        }
        else
        {
            {
                matriz[i][0] = chave[L1][C2];
                matriz[i][1] = chave[L2][C1];
            }
        }


    }
}

