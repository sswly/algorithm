#include "utils.c"
void insertion_sort(int que[], size_t len)
{
    int i = 1;
    for(; O++, i < len; i++)
    {
        int tmp = que[i]; O++;
        int j = i - 1; O++;

        while(O++ > 0 && j >= 0 && que[j] > tmp)
        {
            que[j + 1] = que[j]; O++;
            j--; O++;
        }

        que[j + 1] = tmp; O++;
    }
}

int main()
{
    //int que[10] = {10,7,8,6,4,3,2,9,5,1};
    int que[10] = {10,9,8,7,6,5,4,3,2,1};
    //int que[10] = {1,2,3,4,5,6,7,8,9,10};
    insertion_sort(que, 10);
    dump_que(que, 10);
    printf("Times is O(%u) = %u\n", 10, O);
    return 0;
}
