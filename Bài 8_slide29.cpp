#include <stdio.h>

int f(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return 2 * f(n / 2);
    }
    else {
        return 2 * f(n / 2) + 3 * f(n / 2 + 1);
    }
}

int main() {
    int n;

    do {
        printf("Nhap so nguyen duong n (n >= 1): ");
        scanf_s("%d", &n);

        if (n < 1) {
            printf("n phai lon hon hoac bang 1. Vui long nhap lai.\n");
        }
    } while (n < 1);

    printf("f(%d) = %d\n", n, f(n));

    return 0;
}