#include<stdio.h>
void printPrimesInRange(int a, int b);
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    void printPrimesInRange(int a, int b);}
void printPrimesInRange(int a, int b);{
    for(;a<b;a++){
        if(a==2 || a==3||a==5){
            printf("%d ",a);
        }
        else if (a > 1 && a % 2 != 0 && a % 3 != 0 && a % 5 != 0){
            printf("%d  ",a);

        }
    }printf("\n");
}