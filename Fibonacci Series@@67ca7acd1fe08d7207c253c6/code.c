int fibonacciSeries(int n){
    if(n<=1) return n;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}
int master(){
    int n;
    scanf("%d",&n);

    printf("%d",fibonacciSeries(n));
    return 0;}
    int main(){
        return master;
    }