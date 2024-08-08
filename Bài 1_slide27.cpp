#include <stdio.h>
#include <math.h>

// Câu 2: S(n) = sqrt(2) + sqrt(2) + ... + sqrt(2) (n số hạng)
double S2(int n) {
    if (n == 1) {
        return sqrt(2);
    }
    else {
        return sqrt(2) + S2(n - 1);
    }
}

// Câu 4: S(n) = 1/1 + 1/3 + 1/5 + ... + 1/(2n-1)
double S4(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 1.0 / (2 * n - 1) + S4(n - 1);
    }
}

// Câu 6: S(n) = 1/(1.2.3) + 1/(2.3.4) + ... + 1/(n(n+1)(n+2))
double S6(int n) {
    if (n == 1) {
        return 1.0 / 6;
    }
    else {
        return 1.0 / (n * (n + 1) * (n + 2)) + S6(n - 1);
    }
}

// Câu 8: S(n) = 1 + (1+2) + (1+2+3) + ... + (1+2+...+n)
int S8(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        int temp = 0;
        for (int i = 1; i <= n; i++) {
            temp += i;
        }
        return temp + S8(n - 1);
    }
}

// Câu 10: S(n) = 1.2/(2+sqrt(3)) + 2.3/(3+sqrt(4)) + ... + n(n+1)/(n+1+sqrt(n+2))
double S10(int n) {
    if (n == 1) {
        return 2.0 / (2 + sqrt(3));
    }
    else {
        return (double)(n * (n + 1)) / (n + 1 + sqrt(n + 2)) + S10(n - 1);
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    printf(" Cau 2 S(n) = %f\n", S2(n));
    printf(" Cau 4 S(n) = %f\n", S4(n));
    printf(" Cau 6 S(n) = %f\n", S6(n));
    printf(" Cau 8 S(n) = %d\n", S8(n));
    printf(" Cau 10 S(n) = %f\n", S10(n));

    return 0;
}