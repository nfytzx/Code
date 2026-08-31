#include <stdio.h>

#define PI 3.14159265359

int main() {
    double radius;
    double area;

    printf("请输入圆的半径：");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("半径不能为负数！\n");
        return 1;
    }

    area = PI * radius * radius;
    printf("圆的面积为：%lf\n", area);
    return 0;
}
