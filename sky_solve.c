#include "sky_print.c"

void up(int *vt);

int upper [4];

int solve(int *vt)
{
    up(vt);
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