#include <stdio.h>
#include <math.h>
#include "fat.h"

long long fatorial_recursivo(long long n) { 
    if (n<=0) return 1;
    //for(int i; i<100000000; i++) sin(i);
    return n * fatorial_recursivo(n-1);
}

long long fatorial_iterativo(long long n) {
    unsigned long fact = 1;
 
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
 
    return fact;
}
