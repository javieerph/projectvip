#include "sky_print.c"

void up(int *vt);
void down(int *vt);
void left(int *vt);

int upper [4];
int bottom [4];
int left_c [4];

int solve(int *vt)
{
    up(vt);
    down(vt);
    left(vt);
    board();
}

void up(int *vt)
{
    int u;

    u = 0;
    while (u < 4)
    {
        upper [u] = vt[u];
            u++;
    }
    board_up(upper);
}

void down(int *vt)
{
    int d;
    int d1;

    d = 0;
    d1 = 4;
    while (d < 4 && d1 < 8)
    {
        bottom [d] = vt[d1];
            d++;
            d1++;
    }
    board_down(bottom);
}

void left(int *vt)
{
    int l;
    int l1;

    l = 0;
    l1 = 8;
    while (l < 4 && l1 < 12)
    {
        left_c [l] = vt[l1];
            l++;
            l1++;
    }
    board_left(left_c);
}