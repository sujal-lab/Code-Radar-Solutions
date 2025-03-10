#include<stdio.h>
int main(){
    int N,j;
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
       
        for(int space=1;space<=N-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        for(j=2*i-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}