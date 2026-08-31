#include <stdio.h>

int main() {
    int num,hundreds,tens,units,sum;

    printf("请输入一个三位整数：");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("错误：请输入三位数\n");
        return 1;
    }

    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;

    sum = hundreds * hundreds * hundreds 
          + tens * tens * tens 
          + units * units * units;
          
    printf("百位数：%d\n", hundreds);
    printf("十位数：%d\n", tens);
    printf("个位数：%d\n", units);
    printf("各位数字的立方和:%d\n",sum);
    
    return 0;
}