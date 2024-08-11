#include <stdio.h>

int tinh_tong_de_quy(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return tinh_tong_de_quy(n - 1) * n + tinh_tong_de_quy(n - 1);
    }
}

int tinh_an(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * tinh_tong_de_quy(n - 1);
    }
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("A_%d = %d\n", n, tinh_an(n));

    return 0;
}