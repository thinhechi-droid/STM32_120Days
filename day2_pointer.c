#include <stdio.h>
#include <stdint.h>
void swap(uint8_t *a, uint8_t *b)
{
    uint8_t temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    uint8_t x = 5;
    uint8_t y = 10;

    printf("Gia tri ban dau: x = %d, y = %d\n", x, y);

    // Gọi hàm swap để hoán đổi giá trị của x và y
    swap(&x, &y);

    printf("Sau khi swap: x = %d, y = %d\n", x, y);

    return 0;
}