#include <stdio.h>

// Hàm đệ quy tính UCLN của a và b
int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

int main() {
    int a = 59, b = 96;
    printf("UCLN(%d, %d) = %d\n", a, b, UCLN(a, b));
    return 0;
}
