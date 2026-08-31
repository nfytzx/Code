#include <stdio.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;  
    } else if (b >= a && b >= c) {
        return b; 
    } else {
        return c; 
    }
}

int main() {
    int x, y, z;
    
    printf("please input three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("max: %d\n", max(x, y, z));
    
    return 0;
}