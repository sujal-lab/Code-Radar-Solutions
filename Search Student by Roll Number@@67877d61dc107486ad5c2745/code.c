#include<stdio.h>
int main(){
    int a;
    int found=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int b;
        float c;
        char d[20];
        scanf("%d %s %f",&b[i], d[i], &c[i]);
    }
    int rollno;
    scanf("%d",&rollno);
    for(int i=1;i<=a;i++){
        if (rollno==b){
            printf("%d %s %.2f",b[i],d[i],c[i]);
            found=1;
            break;
        }
    }
    if(!found){printf("Student not found\n");}
    return 0;
}