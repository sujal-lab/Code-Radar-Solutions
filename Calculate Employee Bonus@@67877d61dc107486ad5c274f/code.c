#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        char name[20];
        int a, b;
        float c, d;
        
        scanf("%d %s %d", &a, name, &b);
        
        c = b / 10.0;
        d = b / 20.0;
        
        if (b < 50000) {
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", a, name, c);
        } else {
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", a, name, d);
        }
    }
    
    return 0;
}
