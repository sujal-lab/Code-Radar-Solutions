#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int position = __builtin_ffs(num); // GCC built-in function
    if (position)
        printf("%d\n", position);
    else
        printf("\n");

    return 0;
}

