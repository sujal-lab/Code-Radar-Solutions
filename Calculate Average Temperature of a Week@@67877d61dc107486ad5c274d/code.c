#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,h;
    
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    h=(a+b+c+d+e+f+g)/7;
    printf("Average Temperature: %.2f\n",h);
}