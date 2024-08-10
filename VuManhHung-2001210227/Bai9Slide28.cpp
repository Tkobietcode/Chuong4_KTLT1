#include <stdio.h>

// Hàm đệ quy tính f(n)
int f(int n) {
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2 * f(n / 2);
    return 2 * f(n / 2) + 3 * f(n / 2 + 1);
}

int main() {
    int n = 5;
    printf("f(%d) = %d\n", n, f(n));
    return 0;
}
