#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    char b[20];
    float c;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&a, b, &c);
        if(c>=85)printf("Roll Number: %d, Name: %s, Grade: A\n",a,b);
        else if (c>=70) printf("Roll Number: %d, Name: %s, Grade: B\n",a,b);
        else if (c<70) printf("Roll Number: %d, Name: %s, Grade: C\n",a,b);
    }
}