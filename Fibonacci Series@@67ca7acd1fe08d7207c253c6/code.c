int fibonacciSeries(int n){
    if(n<=1) return n;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

 if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);

    return 0;