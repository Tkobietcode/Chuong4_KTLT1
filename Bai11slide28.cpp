#include <stdio.h>

// Hàm đệ quy tính F(n)
int Fibonacci(int n) {
    if (n <= 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");
    return 0;
}
