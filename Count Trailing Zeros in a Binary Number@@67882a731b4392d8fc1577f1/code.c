#include <stdio.h>

int main(){
    unsigned int a;
    scanf("%u",&a);
    int b=__builtin_ctz(a);
    printf("%d",b);
}