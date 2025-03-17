int printPrimesInRange(int num){
    if(num==2||num==3||num==5) return 1;
    else if(num<2) return 0;
    else if (num%2!=0||num%3!=0||num%5!=0) return 1;
    else return 0;
}

for (int i=a;i<=b;i++){
    if(printPrimesInRange(i)){
        printf("%d\n",i);
    }

}