#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        char b[10];
        float c;
        int d;
        scanf("%d %s %f",&d, b, &c);
        printf("Roll Number: %d, Name: %s, Marks: %.2f",i,b,c);
        printf("\n");
    
    }
      
}