#include <stdio.h>
#include <stdint.h>

// Định nghĩa các macro thao tác bit kinh điển trong lập trình nhúng
#define SET_BIT(REG, BIT)     ((REG) |= (1U << (BIT)))
#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(1U << (BIT)))
#define READ_BIT(REG, BIT)    (((REG) >> (BIT)) & 1U)
#define TOGGLE_BIT(REG, BIT)  ((REG) ^= (1U << (BIT)))

int main() {
    // Giả lập một thanh ghi 8-bit của vi điều khiển (ví dụ: cổng GPIO)
    uint8_t GPIO_ODR = 0b11001010;
    
    printf("Gia tri thanh ghi ban dau: 0b11001010\n");

    // 1. Set bit số 0 lên 1
    SET_BIT(GPIO_ODR, 0);
    printf("Sau khi SET bit 0   : 0b11001011\n");

    // 2. Xóa (Clear) bit số 3 về 0
    CLEAR_BIT(GPIO_ODR, 3);
    printf("Sau khi CLEAR bit 3 : 0b11000011\n");

    // 3. Đảo trạng thái (Toggle) bit số 7
    TOGGLE_BIT(GPIO_ODR, 7);
    printf("Sau khi TOGGLE bit 7: 0b01000011\n");

    // 4. Đọc trạng thái bit số 1
    uint8_t bit_val = READ_BIT(GPIO_ODR, 1);
    printf("Gia tri cua bit 1   : %d\n", bit_val);

    return 0;
}