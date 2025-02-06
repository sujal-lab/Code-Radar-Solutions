#include <stdio.h>

int main (){
    int a;
    scanf("%d",&a);
    int b=1<<(sizeof(int)*8-1);
    if (a&b){printf("Set");}
 
    else{printf("Not Set");}
}