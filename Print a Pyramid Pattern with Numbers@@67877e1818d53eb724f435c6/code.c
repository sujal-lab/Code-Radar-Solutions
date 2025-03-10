#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    char alpha;
    for(int i=1;i<=N;i++){
        alpha='A';
        for(int space=1;space=N-i;space++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d ",alpha);
            alpha++;
        }
        printf("\n");
    }
}