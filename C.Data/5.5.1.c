#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(int k);
int getPrime(int m, int n);
int main()
{
    int m, n;
    int counter;
    do
    {
        printf("print(10,20): ");
        scanf("%d%d", &m, &n);
    } while (m > n || m < 1);
    counter = getPrime(m, n);
    printf("\n[%d,%d]is%d\n", m, n, counter);
    return 0;
}
bool isPrime(int k)
{
    int i, t;
    t = (int)sqrt(k);
    if (k < 2)
        return false;
    for (i = 2; i <= t; i++)
    {
        if (k % i == 0)
            return false;
    }
    return true;
}
int getPrime(int m, int n)
{
    int k, counter = 0;
    for (k = m; k <= n; k++)
        if (isPrime(k))
        {
            printf("%6d ", k);
            counter++;
            if (counter % 10 == 0)
                printf("\n");
        }

    return counter;
}