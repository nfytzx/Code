#include <stdio.h>
#define N 100
int main()
{
    long long int a[N] = {1, 1};
    int i;
    for (i = 2; i < N; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < N; i++)
    {
        if (i % 10 == 0)
            printf("\n");
        printf("%20lld ", a[i]);
    }

    return 0;
}