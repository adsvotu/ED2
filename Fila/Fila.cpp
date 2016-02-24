#include <stdlib.h>
#include "Fila.h"

using namespace std;

void criar(item* F) {
	F->prox = NULL;
	FIM = 0;
}

int vazia(item* F) {
	return (F->prox == NULL);
}

void enfileirar(item* F, int dado) {
	item* novoItem = (item*) malloc(sizeof(item));
    item* atual = F->prox;  
    novoItem->valor = dado; 
    
    if (atual != NULL) { 
        while (atual->prox != NULL) { 
            atual = atual->prox; 
        }
    }
    if (vazia(F)) { //para o primeiro item 
        F->prox = novoItem;
        novoItem->prox = atual;
    } 
	else {
        novoItem->prox = atual->prox;
        atual->prox = novoItem; 
    }
    FIM+=1;
}

void desenfileirar(item* F) {
    item* atual = F->prox;  
    item* anterior = F;
    
    if (!vazia(F)) { 
        anterior->prox = atual->prox;
        free(atual);
        FIM-=1;
    } 
}

int primeiro(item* F) {
	item* atual = F->prox;
	
	if (!vazia(F)) {
		return atual->valor;
	}
}
