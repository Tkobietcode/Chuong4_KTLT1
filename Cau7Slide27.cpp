#include <stdio.h>

// Hàm đệ quy tính S(n)
int S7_recursive(int n) {
    if (n == 1)
        return 1;
    return n * n + S7_recursive(n - 1);
}

// Hàm khử đệ quy (dùng vòng lặp)
int S7_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n = 5;
    printf("S7_recursive(%d) = %d\n", n, S7_recursive(n));
    printf("S7_iterative(%d) = %d\n", n, S7_iterative(n));
    return 0;
}
