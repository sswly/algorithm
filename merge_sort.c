#include <stdlib.h>
#include <string.h>
#include "utils.c"
void que_cpy(int dst_que[], int src_que[], int len)
{
    int i = 0;
    for (; i < len; i++)
    {
        dst_que[i] = src_que[i];
    }
}
void merge(int que[], int p, int q, int r)
{
    int id = 0;
    int *tmp_que = malloc((r - p) * sizeof(int));
    int q1 = q + 1;
    int p1 = p;
    while (p1 <= q || q1 <= r)
    {
        if (que[p1] > que[q1])
        {
            tmp_que[id] = que[q1];
            q1++;
        }
        else
        {
            tmp_que[id] = que[p1];
            p1++;
        }
        id++;
    }

    que_cpy(&que[p], tmp_que, r - p);
    free(tmp_que);
}

void merge_sort(int que[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(que, p, q);
        merge_sort(que, q + 1, r);
        merge(que, p, q , r);
    }
}

int main()
{
    //int que[10] = {10,7,8,6,4,3,2,9,5,1};
    //int que[10] = {10,9,8,7,6,5,4,3,2,1};
    //int que[10] = {1,2,3,4,5,6,7,8,9,10};
    int que[2] = {1,0};
    merge_sort(que, 0, 1);
    dump_que(que, 2);
    printf("Times is O(%u) = %u\n", 10, O);
    return 0;
}
