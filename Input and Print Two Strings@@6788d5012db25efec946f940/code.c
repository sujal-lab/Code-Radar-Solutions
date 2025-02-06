#include <stdio.h>

int main() {
    char a[10], b[10];

    // Prompting user for input
    printf("Enter two words: ");

    // Using width specifier to prevent buffer overflow
    if (scanf("%9s %9s", a, b) == 2) {
        printf("You entered: %s and %s\n", a, b);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
