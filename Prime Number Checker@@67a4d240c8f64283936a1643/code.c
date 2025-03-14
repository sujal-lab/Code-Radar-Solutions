#include<stdio.h>
int isPrime(int num)
{if (num<2) return 0;
else if (num==2||num==3||num==5) return 1;
else if (num%2!=0||num%3!=0||num%5!=0);return 1;
else return 0;}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        for(int j=1;j<=t;j++){
            printf("%d",isPrime);

        }
        printf("\n");
    }
}