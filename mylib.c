#include<stdio.h>
#include "mylib/mylib.h"


int main(void){
  int N = 3;
  printf("%d! = %d\n", N, factorialIterative(3));

  return 0;
}