#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        for(int j=1;j<=t;j++){
            if(t==2||t==3||t==5){
                printf("1");
            }
            else if(t%2!=0||t%3!=0||t%5!=0) printf("1");
            else printf("0");

        }
    }
}