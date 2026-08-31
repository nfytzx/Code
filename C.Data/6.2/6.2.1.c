#include "Array.h"  /* 自定义库函数用""，系统库函数用<> */
#define N 10
int main()
{
    int a[N];
    init(a, N);
    input(a, N);
    print(a, N);
    return 0;
}