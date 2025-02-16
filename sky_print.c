#include <stdio.h>

void up(int *vt);
void down(int *vt);
void left(int *vt);
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

void    board_down(int v[4])
{
    int d;
    int d1;

    d = 1;
    d1 = 0;
    while (d < 5 && d1 < 4)
    {
        board_ar [5][d] = v [d1];
        d++;
        d1++;
    }
}

void    board_left(int v[4])
{
    int l;
    int l1;

    l = 1;
    l1 = 0;
    while (l < 5 && l1 < 4)
    {
        board_ar [l][0] = v [l1];
        l++;
        l1++;
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