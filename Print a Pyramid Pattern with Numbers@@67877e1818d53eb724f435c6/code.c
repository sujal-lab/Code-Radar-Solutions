#include<stdio.h>
int main(){
    int a,i,j;
    int count;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        count=1;
        for(int space=1;space<=a-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%d",count);
            count++;}
        printf("\n");
    }
}
