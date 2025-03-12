#include<stdio.h>
int main(){
    int n;
    char a[20];
        float b,d;
        int c;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        
        scanf("%d %c %f",&c,&a,&b);
        d=b/c;
        
    }
    printf("Average Marks: %.2f",d);
}