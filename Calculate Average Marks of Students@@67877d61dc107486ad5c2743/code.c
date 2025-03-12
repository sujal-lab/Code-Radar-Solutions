#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        char a[20];
        float b,d;
        int c;
        scanf("%d %s %f",&c,a,&b);
        d=b/n;
        
    }
    printf("Average Marks: %.2f",d);
    return 0;
}