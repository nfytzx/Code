#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =17,integerResult ;
    float b =17.0,floatResult ;
    integerResult = a/2;
    printf("integerResult:%d\n",integerResult);
    floatResult = b/2;
    printf("floatResult:%f\n",floatResult);
    printf("Remainder of (7+79) and 24 is:%d\n",(7+79)%24);
    printf("Remainder of (7+79) and 24 is:%d\n",-(7+79)%24);
    printf("Remainder of (7+79) and 24 is:%d\n",(7+79)%-24);
    return 0;
}
