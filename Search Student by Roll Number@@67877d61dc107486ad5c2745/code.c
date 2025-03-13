#include<stdio.h>
int main(){
    int a,rollno;
    int found=0;
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
        int b;
        float c;
        char d[20];
        scanf("%d %s %f",&b, d, &c);
        if(b==rollno){printf("%d %s %.2f",b,d,c);
        found=1;}

    }
    if(!found){printf("Student not found");}
}