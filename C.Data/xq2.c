#include <stdio.h>

int main() {
    int i, count = 0;
    
    printf("10~1000之间能同时被2、3、7整除的数有：\n");
    
    for(i = 10; i <= 1000; i++) {
        if(i % 2 == 0 && i % 3 == 0 && i % 7 == 0) {
            printf("%6d", i);
            count++;
            if(count % 5 == 0)  // 每5个数换一行
                printf("\n");
        }
    }
    
    printf("\n\n共有 %d 个数\n", count);
    return 0;
}