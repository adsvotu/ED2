//#include "Fibonacci.h"

#include <stdio.h>
#include <stdlib.h>


class Fibonacci
{
  
public:
  void interativo(int repeticao);
    
  
};
  
  
    
  

void Fibonacci::interativo(int repeticao) {
  printf("1\n");
  int i = 2, j = 1, aux;
  while (i<repeticao){
    printf("%d\n",i);
    aux = j;
    j = i;
    i = i + aux;
  }
}




