#include <stdio.h>
#include <string.h>
//juntar

int main()
{
	int i,j,k,n;
	char palavra[26],  aux[26], aux2[26], sep[40][2], x[1] = "X";
	scanf("%s", palavra);
	for(i=0;i<strlen(palavra); i=i+2)
	{
		if(palavra[i]==palavra[i+1])
		{
			for(j=0;j<i+1;j++)
			{
				aux[j] = palavra[j];
			}
			for(j=i+1;j<strlen(palavra);j++)
			{
				aux2[j] = palavra[j];
			}
			strcat(aux, x);
			strcat(aux,aux2);
			if(strlen(aux)%2 != 0)
				strcat(aux, x);
		}
	}
	printf("\n%s",aux);
	n=strlen(aux);
	printf("\n%d",n);
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++,k++)
		{

			sep[i][j] = aux[k];
			printf("%s", sep[i][j]);
		}
		printf("\n");
	}
}
