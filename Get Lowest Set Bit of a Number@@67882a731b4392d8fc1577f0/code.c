#include <stdio.h>
#include <math.h>

int findLowestSetBit(int x) {
    if (x == 0) return 0;  // No set bit in 0
    return log2(x & -x) + 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int position = findLowestSetBit(num);
    printf("The lowest set bit is at position: %d\n", position);
    return 0;
}
