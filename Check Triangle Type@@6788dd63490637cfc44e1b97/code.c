#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)printf("Equilateral");
    else if(a==b && a!=c||c==b&&a!=c||c==a&&c!=b)printf("Isosceles");
    else if(a!=b&&b!=c&&c!=a)printf("Scalene");
}