#include <stdio.h>
#include <math.h>

// Hàm tính giai thừa
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Hàm đệ quy tính S(n)
double S11_recursive(int n) {
    if (n == 1)
        return (1 + sqrt(1 + 2)) / (2 + sqrt(factorial(3)));
    return ((n + sqrt(n + n + 1)) / (n + 1 + sqrt(factorial(n + 2)))) + S11_recursive(n - 1);
}

// Hàm khử đệ quy (dùng vòng lặp)
double S11_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (i + sqrt(i + i + 1)) / (i + 1 + sqrt(factorial(i + 2)));
    }
    return sum;
}

int main() {
    int n = 3;
    printf("S11_recursive(%d) = %lf\n", n, S11_recursive(n));
    printf("S11_iterative(%d) = %lf\n", n, S11_iterative(n));
    return 0;
}
