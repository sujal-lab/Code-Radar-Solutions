#include <stdio.h>

void decimalToBinary(int num) {
    int i;
    int started = 0;  // To track if we started printing
    
    for (i = 31; i >= 0; i--) {  
        if (num & (1 << i)) {  // If the bit is set (1)
            printf("1");
            started = 1;  // Start printing from the first '1'
        } else if (started) {  
            printf("0");  // Print '0' only after the first '1'
        }
    }
    
    if (!started)  
        printf("0");  // If the number is 0, print "0"

    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    decimalToBinary(num);

    return 0;
}

