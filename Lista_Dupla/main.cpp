/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fernando
 *
 * Created on 25 de Fevereiro de 2016, 20:21
 */

#include <stdio.h>
#include <stdlib.h>
#include "ListaDupla.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    item lista;
    int opcao=0,dado=0,posicao=0;
    
    do{
        printf("Escolha a opção para trabalhar com listas duplamente encadeadas\n");
        printf("1 - Criar Lista\n");
        printf("2 - Verificar se a Lista está vazia\n");
        printf("3 - Inserir dado através de uma posição na Lista\n");
        printf("4 - Remover dado através de uma posição da Lista\n");
        printf("5 - Buscar dado através de uma posição da Lista\n");
        printf("6 - Buscar posição através de um dado da Lista\n");
        printf("7 - Atualizar Lista\n");
        printf("8 - Remover um dado da Lista\n");
        printf("9 - Sair do programa\n\n");
        
        printf("Digite a opção!\n");
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
                criar(&lista);
                printf("Lista Criada!\n");
                break;
            case 2:
                if (vazia(&lista)){
                    printf("Lista Vazia!\n");
                }else{
                    printf("Lista não Vazia!\n");
                }
                break;
            case 3:
                printf("Digite o dado!\n");
                scanf("%d",&dado);
                printf("Digite a posição de 1 até %d!\n",tamanho+1);
                scanf("%d",&posicao);
                inserir(&lista, dado, posicao);
                printf("Valor %d foi inserido na posição %d\n",dado,posicao);
                break;
            case 4:
                printf("Digite a posição de 1 até %d!\n",tamanho);
                scanf("%d",&posicao);
                remover(&lista,posicao);
                printf("Dado removido da posição %d\n",posicao);
                break;
            case 5:
                printf("Digite a posição!\n");
                scanf("%d",&posicao);
                if (buscar(&lista,posicao) > -1){
                    printf("O dado encontrado na posição %d é o valor %d\n",posicao,buscar(&lista,posicao));
                }else{
                    printf("A posição está vazia!\n");
                }
                break;
            case 6:
                printf("Digite um dado!\n");
                scanf("%d",&dado);
                if (localizar(&lista,dado) > -1){
                    printf("O valor %d foi encontrado na posição %d\n",dado,localizar(&lista,dado));
                }else{
                    printf("O valor não foi encontrado em nenhuma posição!\n");
                }
                break;
            case 7:
                printf("Digite um dado!\n");
                scanf("%d",&dado);
                printf("Digite uma posição!\n");
                scanf("%d",&posicao);
                atualizar(&lista, dado, posicao);
                printf("Valor %d atualizado na posição %d\n",dado,posicao);
                break;
            case 8:
                printf("Digite um dado!\n");
                scanf("%d",&dado);
                excluir(&lista,dado);
                printf("O Valor %d foi removido da Lista!\n",dado);
                break;
            case 9:
                return (EXIT_SUCCESS);
        }
        printf("\n");
      }
      while (opcao != 0);
}

