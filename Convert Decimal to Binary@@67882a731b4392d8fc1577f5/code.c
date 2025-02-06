#include <stdio.h>

void decimalToBinary(int num) {
    int i;
    int started=0;
    for (i = 31; i >= 0; i--) {  // Iterate through all 32 bits
        if (num & (1 << i))      // Check if the i-th bit is set
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main() {
    int num;
    int started=0;
    printf("");
    scanf("%d", &num);
    int started=0;
    printf("");
    decimalToBinary(num);

    return 0;
}
