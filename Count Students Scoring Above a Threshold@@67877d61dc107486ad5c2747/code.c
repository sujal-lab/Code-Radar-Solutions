#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    char c[20];
    float d;
    for(int i=0;i<a;i++){
        scanf("%d %s %f",&b, c, &d);
    }
    float threshold;
    for(int i=0;i<a;i++){
        if(d>threshold){
            printf("Count of students scoring above %.2f: %d",threshold,i);
        }
    }
}