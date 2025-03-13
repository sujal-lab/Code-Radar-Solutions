#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    char b[20];
    float c;
    for(int i=0;i<a;i++){
        scanf("%d %s %f",&a, b, &c);
        if(f>=85)printf("Roll Number: %d, Name: %s, Grade: A",a,b);
        else if (f>=70&&f<=84) printf("Roll Number: %d, Name: %s, Grade: B",a,b);
        else if (f<70) printf("Roll Number: %d, Name: %s, Grade: C",a,b);
    }
}