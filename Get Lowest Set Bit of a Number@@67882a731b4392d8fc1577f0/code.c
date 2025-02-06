#include <stdio.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return 0;  // No set bit in 0

    int pos = 1;  // Position starts from 1
    while ((num & 1) == 0) {  // Keep shifting right until we find a '1'
        num >>= 1;
        pos++;
    }
    return pos;
}

int main() {
    int num;
 
    scanf("%d", &num);

    int position = lowestSetBitPosition(num);
    if (position)
        printf("%d\n", position);
    else
        printf("\n");

    return 0;
}

