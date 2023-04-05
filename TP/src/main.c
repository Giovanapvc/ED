#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "fat.h"
#include "fibo.h"
#include <sys/resource.h>


int main(int argc, char ** argv) {

/*     struct timespec t1, t2, res;
    struct rusage tempo_inicio, tempo_fim;   */

    long long x = atoi(argv[1]); 


    //calculando tempo de execução do fatorial recursivo

/*     getrusage(RUSAGE_SELF, &tempo_inicio); 
    clock_gettime(CLOCK_MONOTONIC, &t1); */ 


    printf("Fatorial recursivo: %llu\n", fatorial_recursivo(x));
/* 
    clock_gettime(CLOCK_MONOTONIC, &t2);
    getrusage(RUSAGE_SELF, &tempo_fim);  */ 

/*     double tempo_fat_recursivo = (double)(tempo_fim.ru_utime.tv_sec - tempo_inicio.ru_utime.tv_sec) + (double)(tempo_fim.ru_utime.tv_usec - tempo_inicio.ru_utime.tv_usec) / 1000000; 

    if(t2.tv_nsec < t1.tv_nsec){
        res.tv_nsec = 1000000000+t2.tv_nsec - t1.tv_nsec;
        res.tv_sec = t2.tv_sec - t1.tv_sec-1;
    } else {
        res.tv_nsec = t2.tv_nsec-t1.tv_nsec;
        res.tv_sec = t2.tv_sec-t1.tv_sec;
    } 
 

     printf("Tempo fatorial recursivo: %ld.%ld\n", res.tv_sec, res.tv_nsec);
    printf("Tempo recursivo: %f segundos (usuário: %f, sistema: %f)\n\n", tempo_fat_recursivo, (double)tempo_fim.ru_utime.tv_sec, (double)tempo_fim.ru_stime.tv_sec);  
  */


    //calculando o tempo de execução do fatorial iterativo
/*     getrusage(RUSAGE_SELF, &tempo_inicio); 
    clock_gettime(CLOCK_MONOTONIC, &t1);  */

    printf("Fatorial iterativo: %llu\n", fatorial_iterativo(x));

/*     clock_gettime(CLOCK_MONOTONIC, &t2);
    getrusage(RUSAGE_SELF, &tempo_fim);  */

/*     double tempo_fat_iterativo = (double)(tempo_fim.ru_utime.tv_sec - tempo_inicio.ru_utime.tv_sec) + (double)(tempo_fim.ru_utime.tv_usec - tempo_inicio.ru_utime.tv_usec) / 1000000; 

     if(t2.tv_nsec < t1.tv_nsec){
        res.tv_nsec = 1000000000+t2.tv_nsec - t1.tv_nsec;
        res.tv_sec = t2.tv_sec - t1.tv_sec-1;
    } else {
        res.tv_nsec = t2.tv_nsec-t1.tv_nsec;
        res.tv_sec = t2.tv_sec-t1.tv_sec;
    }

    printf("Tempo fatorial iterativo: %ld.%ld\n", res.tv_sec, res.tv_nsec);
    printf("Tempo iterativo: %f segundos (usuário: %f, sistema: %f)\n\n", tempo_fat_iterativo, (double)tempo_fim.ru_utime.tv_sec, (double)tempo_fim.ru_stime.tv_sec);  
 */

    //calculando o tempo do fibonacci recursivo
/*     getrusage(RUSAGE_SELF, &tempo_inicio); 
    clock_gettime(CLOCK_MONOTONIC, &t1); 
 */
    printf("Fibonacci recursivo: %llu\n", fibonacci_recursivo(x));
/* 
    clock_gettime(CLOCK_MONOTONIC, &t2); 
    getrusage(RUSAGE_SELF, &tempo_fim); 
 */
   /* double tempo_fibo_recursivo = (double)(tempo_fim.ru_utime.tv_sec - tempo_inicio.ru_utime.tv_sec) + (double)(tempo_fim.ru_utime.tv_usec - tempo_inicio.ru_utime.tv_usec) / 1000000; 

    if(t2.tv_nsec < t1.tv_nsec){
        res.tv_nsec = 1000000000+t2.tv_nsec - t1.tv_nsec;
        res.tv_sec = t2.tv_sec - t1.tv_sec-1;
    } else {
        res.tv_nsec = t2.tv_nsec-t1.tv_nsec;
        res.tv_sec = t2.tv_sec-t1.tv_sec;
    }
  
    printf("Tempo Fibonacci recursivo: %ld.%ld\n", res.tv_sec, res.tv_nsec);
    printf("Tempo recursivo: %f segundos (usuário: %f, sistema: %f)\n\n", tempo_fibo_recursivo, (double)tempo_fim.ru_utime.tv_sec, (double)tempo_fim.ru_stime.tv_sec);   */


    //calculando o tempo do fibonacci iterativo
/*     getrusage(RUSAGE_SELF, &tempo_inicio); 
    clock_gettime(CLOCK_MONOTONIC, &t1); 
 */
     printf("Fibonacci iterativo: %llu\n", fibonacci_iterativo(x)); 
 
/*     clock_gettime(CLOCK_MONOTONIC, &t2); 
    getrusage(RUSAGE_SELF, &tempo_fim);  */ 

/*      double tempo_fibo_iterativo = (double)(tempo_fim.ru_utime.tv_sec - tempo_inicio.ru_utime.tv_sec) + (double)(tempo_fim.ru_utime.tv_usec - tempo_inicio.ru_utime.tv_usec) / 1000000; 

    if(t2.tv_nsec < t1.tv_nsec){
        res.tv_nsec = 1000000000+t2.tv_nsec - t1.tv_nsec;
        res.tv_sec = t2.tv_sec - t1.tv_sec-1;
    } else {
        res.tv_nsec = t2.tv_nsec-t1.tv_nsec;
        res.tv_sec = t2.tv_sec-t1.tv_sec; 
    }  
 
    printf("Tempo fibonacci iterativo: %ld.%ld\n", res.tv_sec, res.tv_nsec); 
    printf("Tempo iterativo: %f segundos (usuário: %f, sistema: %f)\n\n", tempo_fibo_iterativo, (double)tempo_fim.ru_utime.tv_sec, (double)tempo_fim.ru_stime.tv_sec);   */


}

