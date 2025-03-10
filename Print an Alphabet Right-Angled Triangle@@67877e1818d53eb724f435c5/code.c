#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    char alpha;
    for(int i=1;i<=N;i++){
        alpha='A';
        for(int j=1;j<=i;j++){
            printf("%c ",alpha);
            alpha++;
        }
        printf("\n");
    }
}