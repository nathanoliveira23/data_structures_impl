//---------------------------------------------------------
// Linked List (Arquivo de cabeçalho)
//
// Compilador: GNU/gcc
//
// Descrição: Este arquivo contém definições de funções 
//            que modelam e implementam funcionalidades de
//            uma lista encadeada.
//
//---------------------------------------------------------

#pragma once

// Modelagem de um nó de uma lista
// encadeada.
//
struct node {
    int     data;
    node*   next;
};

typedef struct node NODE;

// Esta função é responsável por inicializar um nó cabeçalho
// e retorna um ponteiro para esse cabeçalho.
NODE* initialize();


// Esta função recebe um ponteiro para um nó e um valor inteiro
// como entrada e insere um novo nó na primeira posição da lista 
// encadeada.
void insert_begin(NODE*, int);


// Esta função recebe um ponteiro para um nó e um valor inteiro
// como entrada e insere um novo nó no final da lista encadeada.
void insert_end(NODE*, int);


// Esta função recebe um ponteiro para um nó e remove o primeiro
// elemento da lista encadeada.
void remove_begin(NODE*);


// Esta função recebe um ponteiro para um nó e um valor inteiro 
// e remove o nó de uma posição específica da lista encadeada.
void remove_element(NODE*, int);


// Esta função recebe um ponteiro para um nó e remove todos os
// nós da lista encadeada.
void erase(NODE**);


// Esta função recebe um ponteiro para um nó e um valor inteiro
// e procura na lista encadeada este nó especifico e retorna seu
// endereço.
NODE* search(NODE*, int);


// Esta função imprime os valores de uma lista encadeada.
void print(NODE*);


// Esta função recebe um ponteiro para um nó e verifica se as lista
// encadeada está ou não vazia.
bool is_empty(NODE*);
