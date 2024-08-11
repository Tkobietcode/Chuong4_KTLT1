//Cách 1: Sử dụng đệ quy
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int tim_fibonacci_lon_nhat_nho_hon_n_de_quy(int n) {
    int i = 0;
    while (fibonacci(i) <= n) {
        i++;
    }
    return fibonacci(i - 1);
}

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, tim_fibonacci_lon_nhat_nho_hon_n_de_quy(n));

    return 0;
}



//Cách 2: Khử đệ quy(sử dụng vòng lặp)
#include <stdio.h>

int tim_fibonacci_lon_nhat_nho_hon_n_khu_de_quy(int n) {
    if (n <= 1) {
        return 0;
    }

    int f0 = 0, f1 = 1, fn = 1;
    while (fn <= n) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
    return f1;
}

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, tim_fibonacci_lon_nhat_nho_hon_n_khu_de_quy(n));

    return 0;
}