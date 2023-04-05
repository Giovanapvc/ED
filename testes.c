#include <stdio.h>
#include <time.h>
#include <math.h>

int fibonacci_recursivo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    clock_t inicio = clock();
    int resultado = fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
    //for(int i; i<100000000; i++) sin(i);
    clock_t fim = clock();
    double tempo_chamada = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execucao para fibonacci(%d) = %f segundos\n", n, tempo_chamada);
    return resultado;
}

int main() {
    int n = 5;
    int fib = fibonacci_recursivo(n);
    printf("Fibonacci(%d) = %d\n", n, fib);
    return 0;
}