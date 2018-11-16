#include<stdio.h>
#include<conio2.h>
//funçõa de imprimir peças
int main()
{
    int m[8][12]= {{2,3,5,2,3,5,2,3,5,0,0,0},
					{1,3,4,1,3,4,1,3,4,0,0,0},
					{0,0,0,2,3,5,0,0,0,0,0,0},
					{0,0,0,1,3,4,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0}};
					
	int i,j,x=10,y=10;
    gotoxy(x,y);
    for (i=0;i<8;i++)
    {
        for(j=0;j<12;j++)
        {
            if(m[i][j]==1)
            {
                printf("\xC8");
            }
            else if(m[i][j] ==2 )
            {
                printf("\xC9");
            }
            else if(m[i][j]==3)
            {
                printf("\xCD");
            }
            else if(m[i][j]==4)
            {
                printf("\xBC");
            }
            else if(m[i][j] == 5)
            {
                printf("\xBB");
            }
            x++;
            gotoxy(x,y);
        }
        y++;
        x=10;
        gotoxy(x,y);

    }
}
