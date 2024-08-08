#include <stdio.h>

// Hàm đệ quy tính S(n)
int S1_recursive(int n) {
    if (n == 1)
        return 1;
    return n + S1_recursive(n - 1);
}

// Hàm khử đệ quy (dùng công thức tổng cấp số cộng)
int S1_iterative(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n = 5;
    printf("S1_recursive(%d) = %d\n", n, S1_recursive(n));
    printf("S1_iterative(%d) = %d\n", n, S1_iterative(n));
    return 0;
}
