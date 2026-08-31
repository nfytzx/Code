#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b0,b1,b2,sum,product ;
    x = 153;
    b0 = x % 10;
    b1 = x / 10 % 10;
    b2 = x / 100;
    sum = b0+b1+b2;
    product = b0*b1*b2;
    printf("b2=%d\t b1=%d\t b0=%d\n",b2,b1,b0);
    printf("sum=%d\t product=%d\n",sum,product);
    return 0;
}
