#include <stdio.h>

void up(int *vt);
void board();

int board_ar [6][6] = {{6,0,0,0,0,6},{5,0,0,0,0,5},{5,0,0,0,0,5},
{5,0,0,0,0,5},{5,0,0,0,0,5},{6,0,0,0,0,6}};

void    board_up(int v[4])
{
    int u;
    int u1;

    u = 1;
    u1 = 0;
    while (u < 5 && u1 < 4)
    {
        board_ar [0][u] = v [u1];
        u++;
        u1++;
    }
}

void board()
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i <= 5)
    {
        j = 0;
        while (j <= 5)
        {
            printf("|%i| ", board_ar [i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}