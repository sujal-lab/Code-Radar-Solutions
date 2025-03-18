#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 1) return n;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    
    // Take user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call Fibonacci function and print result
    printf("Fibonacci result: %d\n", fibonacciSeries(n));

    return 0;
}
