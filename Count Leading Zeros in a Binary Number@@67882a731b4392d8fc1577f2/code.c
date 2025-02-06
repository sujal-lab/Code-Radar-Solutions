#include <stdio.h>
int main(){
    unsigned int a;
    scanf("%u",&a);
    int c=__builtin_clz(a);
    printf("%d",c);
}