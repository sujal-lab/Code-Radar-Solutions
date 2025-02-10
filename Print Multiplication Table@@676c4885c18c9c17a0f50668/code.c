#include <stdio.h>

int main(){
    int a,n=1,mul=1;
    scanf("%d",&a);
    while(n<=a){
        mul *= n;
        n++;}
    printf("a x n = %d\n",a,n,mul);
    return 0;

}