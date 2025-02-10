#include <stdio.h>
int main(){
    int a,n=1,sum;
    scanf("%d",&a);
    while(n<=a){
        sum+=n;
        n++;
        printf("%d\n",sum);
    }
    return 0;
}
