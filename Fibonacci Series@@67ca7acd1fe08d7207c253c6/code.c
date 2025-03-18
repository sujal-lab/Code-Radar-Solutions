int fibonacciSeries(int n){
    if(n<=1) return n;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}
printf("%d",fibonacciSeries(n));
return 0;