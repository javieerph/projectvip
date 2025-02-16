#include <stdio.h>
#include <stdlib.h>
#include "sky_solve.c"


int *spaces(char *str)
{
    int *non_sp = (int*)malloc(17 * sizeof(int));
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 32 && str[i] != '\0')
    {
        if (str[i] == ' ')
        {    
            i++;
            continue;
        }
        if (str[i] >= '0' &&  str[i] <= '9')
        {
            non_sp [j] = str[i] - '0';
            j++;
        }
        i++;
    }
    return non_sp;
}

int main()
{
    int *result;
    int i;
    
    char *ej = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    result = spaces(ej);
    while (i < 16)
    {
        printf("%d", result[i]);
        i++;
    }
    printf("--->\n");
    solve(result);
    free(result);
    return (0);
}