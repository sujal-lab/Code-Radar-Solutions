#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", j ^ 1);  // Alternates between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
