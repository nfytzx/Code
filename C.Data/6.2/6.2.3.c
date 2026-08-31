#include "Array.h"  
#define N 100
int seqSearch(int a[], int n, int key)
{
    int i=0;
    while(i<n && a[i]!=key)//顺序查找
        i++;
    if (i<n)
        return i;
    else
        return -1;
}
int main()
{
    int a[N], x, pos;
    init(a, N);
    print(a, N);
    printf("input the number to search\n");
    scanf("%d", &x);
    pos = seqSearch(a, N, x);
    if (pos != -1)
        printf("a[%d]=%d\n", pos, a[pos]);
    else
        printf("Error: %d not found\n", x);
    return 0;
}