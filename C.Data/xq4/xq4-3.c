#include <stdio.h>
int main(void) {
    char str[200];
    int i;

    printf("please enter an English string: ");
    scanf("%199[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Converted string: %s", str);
    return 0;
}