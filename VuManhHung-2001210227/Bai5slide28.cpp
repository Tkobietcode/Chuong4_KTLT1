#include <stdio.h>

// Hàm đệ quy tính Un của cấp số nhân
int CapSoNhan(int a, int q, int n) {
    if (n == 1)
        return a;
    return q * CapSoNhan(a, q, n - 1);
}

int main() {
    int a = 3, q = 2, n = 5;
    printf("CapSoNhan(%d, %d, %d) = %d\n", a, q, n, CapSoNhan(a, q, n));
    return 0;
}
