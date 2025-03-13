#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    char c[a][20];
    float d[a];
    for(int i=0;i<a;i++){
        scanf("%d %s %f",&b, c, &d);
    }
    float threshold;
    for(int i=0;i<a;i++){
        if(d[a]>threshold){
            Count++
            printf("Count of students scoring above %.2f: %d",threshold,Count);
        }
    }
}