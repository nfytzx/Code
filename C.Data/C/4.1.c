#include <stdio.h>
int main() {
    const double zero = 1.0e-7;
    double x,y,result;
    int select;
    printf("请输入两个数：");
    scanf("%lf %lf", &x, &y);
    printf("[1]计算两个数和\n");
    printf("[2]计算两个数差\n");
    printf("[3]计算两个数积\n");
    printf("[4]计算两个数商\n");
    
    scanf("%d", &select);
    switch(select) {
        case 1:
            result = x + y;
            break;
        case 2:
            result = x - y;
            break;
        case 3:
            result = x * y;
            break;
        case 4:
            if (y == 0) {
                printf("错误：除数不能为零！\n");
                return 1;
            }
            result = x / y;
            break;
        default:
            printf("错误：无效的选择！\n");
            return 1;
    }
    printf("结果是：%lf\n", result);
    return 0;
}