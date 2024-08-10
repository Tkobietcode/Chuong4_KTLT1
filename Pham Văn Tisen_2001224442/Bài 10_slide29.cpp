#include <stdio.h>
#define MAX_SIZE 100 

int tim_kiem_nhi_phan_de_quy(int a[], int x, int left, int right) {
    if (left > right) {
        return -1;  // Không tìm thấy x trong mảng
    }

    int mid = (left + right) / 2;

    if (a[mid] == x) {
        return mid;  // Tìm thấy x tại vị trí mid
    }
    else if (a[mid] > x) {
        return tim_kiem_nhi_phan_de_quy(a, x, left, mid - 1);  // Tìm kiếm trong nửa trái
    }
    else {
        return tim_kiem_nhi_phan_de_quy(a, x, mid + 1, right);  // Tìm kiếm trong nửa phải
    }
}

int main() {
    int n, x;

    printf("Nhap so phan tu cua mang: ");
    scanf_s("%d", &n);

    int a[MAX_SIZE];
    printf("Nhap cac phan tu cua mang theo thu tu tang dan:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }

    printf("Nhap gia tri x can tim: ");
    scanf_s("%d", &x);

    int index = tim_kiem_nhi_phan_de_quy(a, x, 0, n - 1);

    if (index != -1) {
        printf("Tim thay x tai vi tri %d trong mang.\n", index);
    }
    else {
        printf("Khong tim thay x trong mang.\n");
    }

    return 0;
}