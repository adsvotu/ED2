/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaDupla.h
 * Author: fernando
 *
 * Created on 25 de Fevereiro de 2016, 20:22
 */

#ifndef LISTADUPLA_H
#define LISTADUPLA_H

typedef struct Item item;

struct Item{
    int valor;
    item *ant,*prox;
};

int static tamanho;

void criar(item*);
int vazia(item*);
void inserir(item*,int,int);
void remover(item*,int);
int buscar(item*,int);
int localizar(item*,int);
void atualizar(item*,int,int);
void excluir(item*,int);

#endif /* LISTADUPLA_H */

