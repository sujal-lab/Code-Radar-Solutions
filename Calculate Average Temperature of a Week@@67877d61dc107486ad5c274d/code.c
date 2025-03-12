#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,h;
    char l[10],m[10],n[10],o[10],p[10],q[10],r[10];
    
    scanf("%f %c %f %c %f %c %f %c %f %c %f %c %f %c",&a,&l,&b,&m,&c,&n,&d,&o,&e,&p,&f,&q,&g,&r);
    h=(a+b+c+d+e+f+g)/7;
    printf("Average Temperature: %.2f\n",h);
}