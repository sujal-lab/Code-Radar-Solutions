#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>1 && a%1==0 && a%a==0) printf("Prime");
    else if (a%2==0|| a%3==0 )printf("Not Prime");
    else printf("Not Prime");
}