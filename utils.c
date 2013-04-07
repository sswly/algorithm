#include <stdio.h>
int O = 0;

void dump_que(int que[], size_t len)
{
    int i = 0;
    for(; i < len; i++)
    {
        printf("%d ", que[i]);
    }
    printf("\n");
}

