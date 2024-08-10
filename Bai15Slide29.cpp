#include <stdio.h>

// Hàm đệ quy tính Yn
int Yn_recursive(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    return Yn_recursive(n - 1) + 2 * Yn_recursive(n - 2) + 3 * Yn_recursive(n - 3);
}

// Hàm không đệ quy tính Yn
int Yn_non_recursive(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;

    int Y1 = 1, Y2 = 2, Y3 = 4; // Khởi tạo giá trị Y1, Y2, Y3

    for (int i = 4; i <= n; i++) {
        int Yn = Y3 + 2 * Y2 + 3 * Y1; // Tính giá trị mới dựa trên các giá trị cũ
        Y1 = Y2;
        Y2 = Y3;
        Y3 = Yn;
    }

    return Y3; // Trả về giá trị Y_n
}

int main() {
    int n = 5; // Giá trị của n cần tính

    // Tính bằng đệ quy
    printf("Gia tri cua Y[%d] (de quy) = %d\n", n, Yn_recursive(n));

    // Tính bằng không đệ quy
    printf("Gia tri cua Y[%d] (khong de quy) = %d\n", n, Yn_non_recursive(n));

    return 0;
}
