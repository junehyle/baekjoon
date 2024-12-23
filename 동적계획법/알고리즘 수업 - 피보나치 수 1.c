#include <stdio.h>
#include <stdlib.h>

// fib(n) {
//     if (n = 1 or n = 2)
//     then return 1;  # 코드1
//     else return (fib(n - 1) + fib(n - 2));
// }

// fibonacci(n) {
//     f[1] <- f[2] <- 1;
//     for i <- 3 to n
//         f[i] <- f[i - 1] + f[i - 2];  # 코드2
//     return f[n];
// }

int fibonacii_recursive(int num)
{
    if (num < 0)
        return -1;
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return (fibonacii_recursive(num - 2) + fibonacii_recursive(num - 1));
}

int main (int argc, char **argv)
{
    int num;
    scanf("%d", &num);
    
    unsigned int res = fibonacii_recursive(num);

    printf("%d %d", res , num - 2);
    return 0;
}