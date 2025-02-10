#include <stdio.h>
int main(){
    int a,n=1,sum=0;
    scanf("%d",&a);
    while(a<=n){
        sum+=n;
        n++;
        printf("%d",sum);
    }
}
