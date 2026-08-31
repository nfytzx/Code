#include <stdio.h>
int main()
{
    long p;
    int i, n;
    p=1;
    do
    {
       printf("请输入一个整数(<=10): ");
       scanf("%d", &n);
    } while (n<=0 || n>10);
    for (i=2; i<=n; i++)
    {
        p=p*i;    // 计算n的阶乘    
    }
    printf("%d!=%d\n", n, p);
    return 0;
}