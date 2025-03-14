#include<stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2 || num == 3 || num == 5) return 1;
    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0) return 0;
    for (int i = 6; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int t;
        scanf("%d", &t);
        if (isPrime(t)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
