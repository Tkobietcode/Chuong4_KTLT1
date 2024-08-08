#include <stdio.h>

// Hàm đệ quy tính S(n)
double S3_recursive(int n) {
    if (n == 1)
        return 1.0 / 2;
    return (double)n / (n + 1) + S3_recursive(n - 1);
}

// Hàm khử đệ quy (dùng vòng lặp)
double S3_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

int main() {
    int n = 5;
    printf("S3_recursive(%d) = %lf\n", n, S3_recursive(n));
    printf("S3_iterative(%d) = %lf\n", n, S3_iterative(n));
    return 0;
}
