#include <stdio.h>

int u(int n) {
    if (n < 6) {
        return n;
    }
    else {
        return u(n - 5) + u(n - 4) + u(n - 3) + u(n - 2) + u(n - 1);
    }
}

int main() {
    int n;

    do {
        printf("Nhap so nguyen duong n: ");
        scanf_s("%d", &n);

        if (n <= 0) {
            printf("n phai la so nguyen duong. Vui long nhap lai.\n");
        }
    } while (n <= 0);

    printf("U(%d) = %d\n", n, u(n));

    return 0;
}