#include<stdio.h>
#include<conio2.h>
void quadrado()
{
	int m_quadrado[4][4]= {{2,1,0,0}, {1,1,0,0}, {0,0,0,0}, {0,0,0,0}};
}
int main()
{
    int m[4][4]= {{2,1,0,0}, {1,1,0,0}, {0,0,0,0}, {0,0,0,0}};
    int i,j, x=10,y=10;
    gotoxy(x,y);
    for (i=0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            if(m [i][j]== 1|| m[i][j] ==2)
            {
                printf("X");
            }
            else
                printf(" ");
            x++;
            gotoxy(x,y);
        }
        y++;
        x=10;
        gotoxy(x,y);

        gotoxy(1,1);

        printf("\xDA\xC4\xBF");
        gotoxy(1,2);
        printf("\xC0\xC4\xD9");

    }
}
