#include<stdio.h>
int main(){
    int a;
    int found=0;
    scanf("%d",&a);
    int b[a];
    float c[a];
    char d[a][20];
    for(int i=0;i<a;i++){
        
        scanf("%d %s %f",&b[i], d[i], &c[i]);
    }
    int rollno;
    scanf("%d",&rollno);
    for(int i=0;i<a;i++){
        if (rollno==b[i]){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",b[i],d[i],c[i]);
            found=1;
            break;
        }
    }
    if(!found){printf("Student not found\n");}
    return 0;
}