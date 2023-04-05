#include <stdio.h>
#include <time.h>

// Iterative factorial function
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive factorial function
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial_recursive(n - 1);
    }
}

// Iterative Fibonacci function
int fibonacci_iterative(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        int a = 0;
        int b = 1;
        int c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

// Recursive Fibonacci function
int fibonacci_recursive(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    int n = 10; // Change this value to calculate for different inputs

    clock_t t1, t2;
    double time_taken;

    // Calculate time taken for iterative factorial
    t1 = clock();
    factorial_iterative(n);
    t2 = clock();
    time_taken = ((double)(t2 - t1)) / CLOCKS_PER_SEC;
    printf("Iterative factorial time taken: %lf seconds\n", time_taken);

    // Calculate time taken for recursive factorial
    t1 = clock();
    factorial_recursive(n);
    t2 = clock();
    time_taken = ((double)(t2 - t1)) / CLOCKS_PER_SEC;
    printf("Recursive factorial time taken: %lf seconds\n", time_taken);

    // Calculate time taken for iterative Fibonacci
    t1 = clock();
    fibonacci_iterative(n);
    t2 = clock();
    time_taken = ((double)(t2 - t1)) / CLOCKS_PER_SEC;
    printf("Iterative Fibonacci time taken: %lf seconds\n", time_taken);

    // Calculate time taken for recursive Fibonacci
    t1 = clock();
    fibonacci_recursive(n);
    t2 = clock();
    time_taken = ((double)(t2 - t1)) / CLOCKS_PER_SEC;
    printf("Recursive Fibonacci time taken: %lf seconds\n", time_taken);

    return 0;
}
