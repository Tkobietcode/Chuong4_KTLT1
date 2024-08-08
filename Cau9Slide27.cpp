#include <stdio.h>

// Hàm tính giai thừa
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Hàm đệ quy tính S(n)
double S9_recursive(int n) {
    if (n == 1)
        return 3.0 / factorial(2);
    return (double)(n + (n + 1)) / factorial(n + 1) + S9_recursive(n - 1);
}

// Hàm khử đệ quy (dùng vòng lặp)
double S9_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)(i + (i + 1)) / factorial(i + 1);
    }
    return sum;
}

int main() {
    int n = 5;
    printf("S9_recursive(%d) = %lf\n", n, S9_recursive(n));
    printf("S9_iterative(%d) = %lf\n", n, S9_iterative(n));
    return 0;
}
