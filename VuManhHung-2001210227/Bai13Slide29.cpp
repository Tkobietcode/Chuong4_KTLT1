#include <stdio.h>

void compute_sequence(int n, int* x, int* y) {
    // Khởi tạo giá trị ban đầu
    *x = 1;
    *y = 0;

    for (int i = 1; i <= n; i++) {
        int tempX = *x;
        *x = *x + *y;
        *y = 3 * tempX + 2 * (*y);
    }
}

int main() {
    int n = 5; // Giá trị của n cần tính
    int x, y;

    compute_sequence(n, &x, &y);

    printf("Gia tri cua x[%d] = %d\n", n, x);
    printf("Gia tri cua y[%d] = %d\n", n, y);

    return 0;
}
