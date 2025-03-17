
int isPrime(int num) {
    if (num < 2) return 0;  
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return 0;  
    }
    return 1;
}

void printPrimesInRange(int a, int b) {
    int found = 0; // Flag to check if any prime number is found

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1; // Prime number found
        }
    }

    if (!found) {
        printf("No prime numbers found in the given range.");
    }

    printf("\n"); // To ensure proper formatting
}
