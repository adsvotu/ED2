#include <stdlib.h>
#include "ListaDupla.h"

void criar(item* l){
    //l = (item*) malloc(sizeof(item));
    l->ant=NULL;
    l->prox=NULL;
    tamanho=0;
}
int vazia(item* l){
   return (tamanho==0) && (l->prox==NULL); 
}

//o que vai mudar nessa lista
void inserir(item* l,int dado, int posicao){
    int i;
    item* novoItem = (item*) malloc(sizeof(item));
    
    novoItem->valor=dado;
    
    if ((posicao>0) && (posicao<=tamanho+1)){  //testa se a posicao é valida para ser inserido
        /*if (vazia(l)){//insere em lista vaiza
            novoItem->prox=NULL;
            l->prox = novoItem;
        }else{
            if (posicao==1){ //insere no inicio da lista
                novoItem->prox = l->prox;
                l->prox = novoItem;
            }else{  //insere em qualquer posicao*/
                item* atual = (item*) malloc(sizeof(item));
                atual->prox = l->prox; //passo 2
                atual->ant = l; //passo 2
                for (i=1; i<posicao; i++) {  //passo 3   buscando ate a posicao que vc quer inserir, 
                    atual->ant=atual->prox;  //essas duas linhas sao os deslocamentos dos dois ponteiros
                    atual->prox=atual->prox->prox; //apontava para o primeiro, aponta para o outro depois
                }
                
                //movimenta os quatro ponteiros
                novoItem->prox = atual->prox;  //  //se inverter as duas linhas dÃ¡ problema!
                atual->ant->prox = novoItem;
                novoItem->ant = atual->ant;
                if (atual->prox!=NULL) {   //se for uma posicao intermediaria ele entra no if, se for uma posicao de ponta nao
                    atual->prox->ant = novoItem;
                }
            //}
        //}
        
        tamanho += 1;
    }
}

//o que vai mudar nessa lista
void remover(item* l, int posicao){
    int i;
    item* atual = (item*) malloc(sizeof(item)); //cria o ponteiro atual
    atual->prox = l->prox;  //aponta pra cabeça da lista
    
    if ((!vazia(l)) && (posicao>0) && (posicao<=tamanho)){
           /*if (posicao==1){ //remove do inicio da lista
                atual = l->prox;
                l->prox = atual->prox;
            }else{  //remove de qualquer posicao*/
                atual->ant = l;  
                for (i=1; i<posicao; i++){
                    atual->ant=atual->prox;
                    atual->prox=atual->prox->prox;
                }
                atual->ant->prox = atual->prox->prox;
                if (atual->prox->prox!=NULL){ //se for uma posicao intermediaria ele entra no if, se for uma posicao de ponta nao
                    atual->prox->prox->ant = atual->ant;
                }
            //}
          free(atual->prox);
          free(atual);
          tamanho -= 1;
    }
}
int buscar(item* l, int posicao){
    int i;
    item* atual = l->prox;
    
    if ((!vazia(l)) && (posicao>0) && (posicao<=tamanho)){
        for (i=1; i<posicao; i++){
            atual=atual->prox;
        }
        return atual->valor;
    }else{
        return -1;
    }
}
int localizar(item* l, int dado){
    int i = 1;
    int r = -1;
    item* atual = l->prox;

    while ((i<=tamanho) && (atual->valor != dado)){
        i++;
        atual=atual->prox;
    }
    if (i<=tamanho){
        r = i;
    }

    return r;
}
void atualizar(item* l, int dado, int posicao){
    int i;
    item* atual = l->prox;
    
    if ((!vazia(l)) && (posicao>0) && (posicao<=tamanho)){
        for (i=1; i<posicao; i++){
            atual=atual->prox;
        }
        atual->valor = dado;
    }
}
void excluir(item* l, int dado){
   int posicao;

    if (!vazia(l)){
        posicao = localizar(l,dado);
        if (posicao != -1){
            remover(l,posicao);
        }
    } 
}

