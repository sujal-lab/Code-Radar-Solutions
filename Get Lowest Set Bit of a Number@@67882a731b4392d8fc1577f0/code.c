#include <stdio.h>

int findLowestSetBit(int x) {
    if (x == 0) return 0;  // No set bit in 0
    int position = 1;
    while (!(x & 1)) { // Keep shifting until LSB is 1
        x >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int position = findLowestSetBit(num);
    printf("The lowest set bit is at position: %d\n", position);
    return 0;
}
