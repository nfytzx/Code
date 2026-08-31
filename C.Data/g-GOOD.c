#include <stdio.h>

int main() {
    char input;
    
    printf("请输入一个字母：");
    scanf("%c", &input);

    if (input == 'g') {
        printf("Good\n");
    } else {
        printf("输入的不是字母g\n");
        return 1;
    }
    
    return 0;
}