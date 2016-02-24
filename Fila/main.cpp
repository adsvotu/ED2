#include <iostream>
#include<locale.h>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"Portuguese");
    
    item fila;
    int opcao=0, dado=0, first=0;
    
    do{
        printf("Escolha a opção para trabalhar com Fila\n");
        printf("1 - Criar Fila\n");
        printf("2 - Verificar se a Fila está vazia\n");
        printf("3 - Verificar o tamanho da Fila\n");
        printf("4 - Enfileirar dado na Fila\n");
        printf("5 - Desenfileirar dado na Fila\n");
        printf("6 - Buscar Primeiro na Fila\n");
        printf("0 - Sair do programa\n\n");
        
        printf("Digite a opção!\n");
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
                criar(&fila);
                printf("Fila Criada!\n");
                break;
            case 2:
                if (vazia(&fila)){
                    printf("Fila Vazia!\n");
                }else{
                    printf("Fila não Vazia!\n");
                }
                break;
            case 3:
                printf("O tamanho da Fila é: %d\n",FIM);
                break;
            case 4:
                printf("Digite o dado!\n");
                scanf("%d",&dado);
                enfileirar(&fila, dado);
                printf("Valor %d foi enfileirado",dado);
                break;
            case 5:
                desenfileirar(&fila);
                printf("A Fila foi desenfileirada");
                break;
            case 6:
                first = primeiro(&fila);
                printf("O Primeiro na Fila é %d", first);
                break;
            case 0:
                return (EXIT_SUCCESS);
        }
        printf("\n");
      }
      while (opcao != 0);
}


