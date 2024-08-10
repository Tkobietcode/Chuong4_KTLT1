#include <stdio.h>

// Hàm đệ quy tính S(n)
int S5_recursive(int n) {
    if (n == 1)
        return 1 * 2;
    return n * (n + 1) + S5_recursive(n - 1);
}

// Hàm khử đệ quy (dùng vòng lặp)
int S5_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

int main() {
    int n = 5;
    printf("S5_recursive(%d) = %d\n", n, S5_recursive(n));
    printf("S5_iterative(%d) = %d\n", n, S5_iterative(n));
    return 0;
}
