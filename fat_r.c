#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include <sys/resource.h>



//funcao fatorial recursiva
long long fatR(int n){

    if(n == 0) {
        return 1;
    } else {
        return n*fatR(n-1);
    }

}

//funcao fatorial iterativa
long long fatI(int n) {

    long long f;
    f = 1;
    while(n > 0){
        f  = f * n;
        n = n - 1;
    }
    return f;

}

int main(int argc, char ** argv){

    struct timespec t1, t2, res;

    int x;

    scanf("%d", &x);

/*     printf("%llu\n", fatR(x)); */

/*     printf("%llu\n", fatI(x)); */

    clock_gettime(CLOCK_MONOTONIC, &t1);

    printf("%llu\n", fatR(x));

    clock_gettime(CLOCK_MONOTONIC, &t2);

     if(t2.tv_nsec < t1.tv_nsec){
        res.tv_nsec = 1000000000+t2.tv_nsec - t1.tv_nsec;
        res.tv_sec = t2.tv_sec - t1.tv_sec-1;
    } else {
        res.tv_nsec = t2.tv_nsec-t1.tv_nsec;
        res.tv_sec = t2.tv_sec-t1.tv_sec;
    }
 
    printf("%ld.%ld\n", res.tv_sec, res.tv_nsec);

}