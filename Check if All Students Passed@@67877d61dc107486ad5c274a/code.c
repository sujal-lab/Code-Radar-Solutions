#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
       int b;
        char c[20];
        float d;
    int all_passed=1;
    for(int i=0;i<a;i++){
        scanf("%d %s %f",&b, c, &d);
        if(d<50.00){
            all_passed=0;
        }}
    
    if(all_passed) printf("All Passed");
    else  printf("Not all passed");
    }
       

