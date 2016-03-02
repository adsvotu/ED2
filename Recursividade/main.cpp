#include <iostream>
#include <stdlib.h>
#include<locale.h>

void interativo(int repeticao);
void recursivo(int);
int Fibonacci(int);

void fatorial_interativo(int valor);
int fatorial_recursivo(int n);

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	int opcao=0, n=0;
    
    do {
        printf("Escolha uma opção \n");
        printf("1 - Fibonacci Interativo\n");
        printf("2 - Fibonacci Recursivo\n");
        printf("3 - Fatorial Interativo\n");
        printf("4 - Fatorial Recursivo\n");
        printf("0 - Sair do programa\n\n");
        
        printf("Digite a opção!\n");
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
            	printf("Fibonacci Interativo:\n");
            	printf("digite o valor de n:");
			    scanf("%d", &n);
            	
                interativo(n);
                break;
            case 2:
            	printf("Fibonacci Recursivo:\n");
            	printf("digite o valor de n:");
			    scanf("%d", &n);
            	
            	recursivo(n);
                break;
            case 3:
            	printf("Fatorial Interativo:\n");
            	printf("digite o valor de n:");
			    scanf("%d", &n); 
            	
                fatorial_interativo(n);
                break;
            case 4:
            	printf("Fatorial Recursivo:\n");
			    printf("digite o valor de n:");
			    scanf("%d", &n);
			
				printf("\n\nfatorial de %2d = %2d\n", n, fatorial_recursivo(n));
                break;
            case 0:
                return (EXIT_SUCCESS);
        }
        printf("\n");
      }
      while (opcao != 0);    
}

void interativo(int repeticao) {
  printf("1\n");
  int i = 2, j = 1, aux;
  while (i<repeticao) {
    printf("%d\n",i);
    aux = j;
    j = i;
    i = i + aux;
  }
}

void recursivo(int repeticao) {
	for (int i=1;i<repeticao;i++){
       printf("%d\n", Fibonacci(i));
    }
}

int Fibonacci(int x) 
{
    if (x < 2){
     return x;
    }     
    return Fibonacci (x - 1) + Fibonacci (x - 2);
}

void fatorial_interativo(int valor) {
	int f = valor;
	float resultado = 1;
	for (int i=f; i>=1; i--)
	    resultado*=i;
	printf("%F",resultado );
}

int fatorial_recursivo(int n) {
	if (n <= 0) {
	  return 1;
	} 
	printf("%d\n", n);
	return n * fatorial_recursivo(n-1) ;
}










