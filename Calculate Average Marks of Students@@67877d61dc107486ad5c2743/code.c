#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        char a[20];
        float b,d;
        int c;
        scanf("%d %c %f",&c,&a,&b);
        d=b/c;
        printf("Average Marks: %.2f",d);
        printf("\n");
    }
}