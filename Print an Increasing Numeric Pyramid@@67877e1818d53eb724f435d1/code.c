#include<stdio.h>
int main(){
    int N,j;
    scanf("%d",&N);
    int count;
    for(int i=1;i<=N;i++){
       count=1;
        for(int space=1;space<=N-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}