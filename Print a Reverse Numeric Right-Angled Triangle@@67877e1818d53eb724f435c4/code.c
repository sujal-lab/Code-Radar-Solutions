#include<stdio.h>
int main(){
    int N;
    int count;
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        count=1;
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}