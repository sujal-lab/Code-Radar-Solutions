#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char name[20];
        int a,b;
        float c,d;
        scanf("%d %c %d",&a,&name,&b);
        c=b/10;
        d=b/20;
        if(b<50000){printf("Employee ID: %d, Name: %c, Bonus: %.2f",a,name,c);}
        else {printf("Employee ID: %d, Name: %c, Bonus: %.2f",a,name,d);}
        printf("\n");
    }
}