#include <stdio.h>

// Bài 4: Viết hàm tìm giá trị phần tử thứ n của cấp số cộng có hạng đầu là a, công sai là r:
int cap_so_cong(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return cap_so_cong(a, r, n - 1) + r;
    }
}

int main() {
    int a, r, n;

    printf("Nhap gia tri hang dau a: ");
    scanf_s("%d", &a);

    printf("Nhap cong sai r: ");
    scanf_s("%d", &r);

    do {
        printf("Nhap vi tri phan tu n (n > 0): ");
        scanf_s("%d", &n);

        if (n <= 0) {
            printf("n phai lon hon 0. Vui long nhap lai.\n");
        }
    } while (n <= 0);

    printf("Gia tri phan tu thu %d la: %d\n", n, cap_so_cong(a, r, n));

    return 0;
}