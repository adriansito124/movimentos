#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int x = 1;
    int y = 1;
    int fim = 0;
    char move = 'o', player = 'A';

    char mapa[10][17];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            mapa[i][j] = ' ';
        }
    }

    mapa[1][1] = player;
    mapa[0][0] = ' ', mapa[0][1] = '_', mapa[0][2] = '_', mapa[0][3] = '_', mapa[0][4] = '_', mapa[0][5] = '_', mapa[0][6] = '_', mapa[0][7] = '_', mapa[0][8] = '_', mapa[0][9] = '_', mapa[0][10] = '_', mapa[0][11] = '_', mapa[0][12] = '_', mapa[0][13] = '_', mapa[0][14] = '_', mapa[0][15] = '_', mapa[0][16] = ' ';
    mapa[9][0] = '|', mapa[9][1] = '_', mapa[9][2] = '_', mapa[9][3] = '_', mapa[9][4] = '_', mapa[9][5] = '_', mapa[9][6] = '_', mapa[9][7] = '_', mapa[9][8] = '_', mapa[9][9] = '_', mapa[9][10] = '_', mapa[9][11] = '_', mapa[9][12] = '_', mapa[9][13] = '_', mapa[9][14] = '_', mapa[9][15] = '_', mapa[9][16] = '|';
    mapa[1][0] = '|', mapa[2][0] = '|', mapa[3][0] = '|', mapa[4][0] = '|', mapa[5][0] = '|', mapa[6][0] = '|', mapa[7][0] = '|', mapa[8][0] = '|', mapa[9][0] = '|';
    mapa[1][16] = '|', mapa[2][16] = '|', mapa[3][16] = '|', mapa[4][16] = '|', mapa[5][16] = '|', mapa[6][16] = '|', mapa[7][16] = '|', mapa[8][16] = '|', mapa[9][16] = '|';
    mapa[2][2]='X', mapa[4][4]='X', mapa[6][6]='X', mapa[8][8]='X', mapa[4][2]='X', mapa[6][2]='X', mapa[8][2]='X', mapa[2][4]='X', mapa[2][6]='X', mapa[2][8]='X', mapa[2][10]='X', mapa[2][12]='X', mapa[2][14]='X', mapa[2][14]='X';

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            printf("%c", mapa[i][j]);
        }

        printf("\n");
    }

    while (fim == 0)
    {
        move = (char)_getch();

        if (move == 'w' && y>1)
        {
            y--;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    if (mapa[i][j] == player && i-1>0)
                    {
                        mapa[i - 1][j] = player;
                        mapa[i][j] = ' ';
                        break;
                    }
                }
            }

            system("cls");

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    printf("%c", mapa[i][j]);
                }

                printf("\n");
            }
            Sleep(200);
        }
        else if (move == 's' && y<8)
        {
            y++;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    if (mapa[i][j] == player && i+1<9)
                    {
                        mapa[i][j] = ' ';
                        mapa[i + 1][j] = player;
                        j=j+30;
                        i=i+20;
                    }
                }
            }

            system("cls");

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    printf("%c", mapa[i][j]);
                }

                printf("\n");
            }
            Sleep(200);
        }
        else if (move == 'a' && x>1)
        {
            x--;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    if (mapa[i][j] == player && j-1>0)
                    {
                        mapa[i][j] = ' ';
                        mapa[i][j-1] = player;
                        break;
                    }
                }
            }

            system("cls");

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    printf("%c", mapa[i][j]);
                }

                printf("\n");
            }
            Sleep(200);
        }
        else if (move == 'd' && x<14)
        {
            x++;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    if (mapa[i][j] == player && j+1<15)
                    {
                        mapa[i][j] = ' ';
                        mapa[i][j+1] = player;
                        break;
                    }
                }
            }

            system("cls");

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 17; j++)
                {
                    printf("%c", mapa[i][j]);
                }

                printf("\n");
            }
            Sleep(200);
        }

    }

    return 0;
}