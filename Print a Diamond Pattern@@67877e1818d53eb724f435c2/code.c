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
        
        }
        printf("\n");
    }
      for(int i=N-1;i>=1;i--){
       
        for(int space=1;space<=N-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
               
}printf("\n"); }