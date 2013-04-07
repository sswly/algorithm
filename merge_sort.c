#include "utils.c"
void merge(int que[], int p, int q, int r)
{

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
    int que[10] = {10,9,8,7,6,5,4,3,2,1};
    //int que[10] = {1,2,3,4,5,6,7,8,9,10};
    merge_sort(que, 10);
    dump_que(que, 10);
    printf("Times is O(%u) = %u\n", 10, O);
    return 0;
}
