#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float total_marks;
    for (int i=1;i<=n;i++){
        char a[20];
        float b;
        int c;
        scanf("%d %s %f",&c,a,&b);
        total_marks +=b;
        
    }
    
    float d=total_marks/n;
    printf("Average Marks: %.2f",d);
    return 0;
}