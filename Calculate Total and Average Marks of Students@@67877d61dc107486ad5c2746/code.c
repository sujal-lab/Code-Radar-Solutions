#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    float total_marks=0;
    for(int i=1;i<=a;i++){
        int b;
        char c[20];
        float d;
        scanf("%d %s %f",&b, c, &d);
        total_marks+=d;
    }
    printf("Total Marks: %.2f\n",total_marks);
    printf("Average Marks: %.2f\n",total_marks/a);
}   