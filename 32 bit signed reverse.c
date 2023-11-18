#include <stdio.h>

int reverseBits(int num) {
    int numBits = sizeof(num) * 8; // Assuming 32 bits
    int result = 0;

    for (int i = 0; i < numBits; i++) {
        if ((num & (1 << i)) != 0) {
            result |= 1 << ((numBits - 1) - i);
        }
    }

    return result;
}

int main() {
    int num;

    printf("Enter a 32-bit signed integer: ");
    scanf("%d", &num);

    int reversedNum = reverseBits(num);

    printf("Original: %d\n", num);
    printf("Reversed: %d\n", reversedNum);

    return 0;
}
