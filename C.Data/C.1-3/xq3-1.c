#include <stdio.h>
int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i * i;
    }
    return total;
}

int main() {
    int n;
    printf("please input a number: ");
    scanf("%d", &n);
    
    printf("sequence 1^2 + 2^2 + 3^2 + ... + %d^2 is: %d\n", n, sum(n));
    return 0;
}