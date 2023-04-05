#include <stdio.h>
#include <math.h>
#include "fibo.h"


long long fibonacci_iterativo(long long n) {
    int fn1 = 1, fn2 = 1;
    int fn, i;
    if (n < 3) {
        return 1;
    }
    for (i = 3; i <= n; i++) {
        fn = fn2 + fn1;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

long long fibonacci_recursivo(long long n) {
    if (n < 3)
        return 1;
    else
        //for(int i; i<100000000; i++) sin(i);
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
}
