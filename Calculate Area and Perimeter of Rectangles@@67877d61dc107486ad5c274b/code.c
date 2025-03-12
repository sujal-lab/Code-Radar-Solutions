#include <stdio.h>
int main(){
    int n,a,b;
    float x,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a, &b);
        x=a*b;
        z=2*(a+b);
        printf("Rectangle %d: Area = %f, Perimeter = %f",n,x,z);
        printf("\n");
    }
    
}