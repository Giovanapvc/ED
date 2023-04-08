#include <stdio.h>
#include <stdlib.h>

int actual_calc(int a, int b){
  int c;
  if (b == 0) {
    printf("Erro: não é possível efetuar divisão por zero.\n");
    return -1;
  }
  c = a / b;
  return c;
}

int calc(){
  int a;
  int b;
  a = 13;
  b = 0;
  int result = actual_calc(a, b);
  if (result != -1) {
    printf("%d\n", result);
  }
  return 0;
}

int main(){
  calc();
  return 0;
}

