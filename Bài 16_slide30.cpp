//Cách 1: Đệ quy :
#include <stdio.h>

int tinh_xn_de_quy(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return tinh_xn_de_quy(n - 1) + (n - 1) * tinh_xn_de_quy(n - 2);
    }
}

int main() {
    int n;

    printf("Nhap n (n >= 1): ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("n phai lon hon hoac bang 1.\n");
    }
    else {
        printf("X_%d = %d\n", n, tinh_xn_de_quy(n));
    }

    return 0;
}

//Cách 2: Khử đệ quy :
#include <stdio.h>

int tinh_xn_khu_de_quy(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int x1 = 1, x2 = 1, xn;
    for (int i = 3; i <= n; ++i) {
        xn = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = xn;
    }
    return xn;
}

int main() {
    int n;

    printf("Nhap n (n >= 1): ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("n phai lon hon hoac bang 1.\n");
    }
    else {
        printf("X_%d = %d\n", n, tinh_xn_khu_de_quy(n));
    }

    return 0;
}