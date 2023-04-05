#include <stdio.h>
#include <time.h>
#include <sys/resource.h>

unsigned long long fatorial_recursivo(unsigned long long n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial_recursivo(n-1);
    }
}

unsigned long long fatorial_iterativo(unsigned long long n) {
    unsigned long long resultado = 1;
    for (unsigned long long i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    unsigned long long n = 20; // valor de entrada
    clock_t inicio, fim;
    double tempo_recursivo, tempo_iterativo;
    struct rusage uso_recursivo, uso_iterativo;

    // medindo o tempo de execução do fatorial recursivo e o tempo de utilização de recursos
    getrusage(RUSAGE_SELF, &uso_recursivo);
    inicio = clock();
    unsigned long long resultado_recursivo = fatorial_recursivo(n);
    fim = clock();
    getrusage(RUSAGE_SELF, &uso_recursivo);
    tempo_recursivo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    double tempo_usuario_recursivo = (double)(uso_recursivo.ru_utime.tv_sec + uso_recursivo.ru_utime.tv_usec / 1000000.0);
    double tempo_sistema_recursivo = (double)(uso_recursivo.ru_stime.tv_sec + uso_recursivo.ru_stime.tv_usec / 1000000.0);

    // medindo o tempo de execução do fatorial iterativo e o tempo de utilização de recursos
    getrusage(RUSAGE_SELF, &uso_iterativo);
    inicio = clock();
    unsigned long long resultado_iterativo = fatorial_iterativo(n);
    fim = clock();
    getrusage(RUSAGE_SELF, &uso_iterativo);
    tempo_iterativo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    double tempo_usuario_iterativo = (double)(uso_iterativo.ru_utime.tv_sec + uso_iterativo.ru_utime.tv_usec / 1000000.0);
    double tempo_sistema_iterativo = (double)(uso_iterativo.ru_stime.tv_sec + uso_iterativo.ru_stime.tv_usec / 1000000.0);

    // imprimindo os resultados
    printf("Fatorial de %llu:\n", n);
    printf("Recursivo: %llu (%f segundos, %f segundos de usuário, %f segundos de sistema)\n", resultado_recursivo, tempo_recursivo, tempo_usuario_recursivo, tempo_sistema_recursivo);
    printf("Iterativo: %llu (%f segundos, %f segundos de usuário, %f segundos de sistema)\n", resultado_iterativo, tempo_iterativo, tempo_usuario_iterativo, tempo_sistema_iterativo);

    return 0;
}
