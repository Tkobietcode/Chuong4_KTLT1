#include <stdio.h>

//Bài 2: Viết hàm tính m mũ n (m^n) với m là số nguyên và n là số nguyên dương, 
//sử dụng kỹ thuật đệ quy. Sau đó viết chương trình chính nhận m và n từ bàn phím và in ra kết quả m^n.
int tinh_mu(int m, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return m * tinh_mu(m, n - 1);
    }
}

int main() {
    int m, n;

    printf("Nhap so nguyen m: ");
    scanf_s("%d", &m);

    do {
        printf("Nhap so nguyen duong n: ");
        scanf_s("%d", &n);

        if (n < 0) {
            printf("n phai la so nguyen duong. Vui long nhap lai.\n");
        }
    } while (n < 0);

    printf("%d^%d = %d\n", m, n, tinh_mu(m, n));

    return 0;
}