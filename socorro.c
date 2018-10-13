#include <stdio.h>
#include <string.h>
//juntar

int main()
{
	int i,j;
	char palavra[26],  aux[26], aux2[26], sep[20][2], x[] = "X";
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
//	for(i=0;i!='\0';i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			sep[i][j] = aux[i];
//			printf("%s", sep[i][j]);
//		}
//		printf("\n");
//	}
}