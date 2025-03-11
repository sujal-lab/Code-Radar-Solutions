#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers < 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // If no divisors found, it's prime
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i < b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
