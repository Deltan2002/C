#include<stdio.h>



// int main(){
//     int n;

//     printf("Enter fib number\n");
//     scanf("%d",&n);
//    printf("%d is the fibonacci number for range %d", fib(n),n);
//     return 0;
// }
// int fib(int fibo){

//    return fibo<=1? 1: fib(fibo-1) + fib(fibo-2);
    

// }


int fib(int n) {
    if (n == 0 || n == 1) { 
        return n;
    } else {
        return fib(n-1) + fib(n-2); 
    }
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
