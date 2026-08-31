#include <stdio.h>

long fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 20;
    long result = fib(n);
    
    printf("斐波那契数列第%d项的值为:%ld\n", n, result);
    
    return 0;
}