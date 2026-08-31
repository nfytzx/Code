#include <stdio.h>
int main()
{
    float score;
    int grade;
    int counter=0;
    while (counter<10)
    {
        printf("请输入分数：");
        scanf("%f", &score);
        grade=(int)score/10;
        switch (grade)
        {
        // 程序运行结果
        default:
            printf("分数输入有误\n");
            break;
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("不及格\n");
            break;
        case 6:
            printf("及格\n");
            break;
        case 7:
            printf("中等\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 9: case 10:
            printf("优秀\n");
            break;
       }
      counter++;
    }
    return 0;
}
