//---------------------------------------------------------
// Linked List (Arquivo fonte)
//
// Compilador: GNU/gcc
//
// Descrição: Este arquivo contém definições de funções 
//            que modelam e implementam funcionalidades de
//            uma lista encadeada.
//
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include "../headers/linked_list.h"


// Esta função é responsável por inicializar um nó cabeçalho
// e retorna um ponteiro para esse cabeçalho.
NODE* initialize() 
{
    NODE* head = new NODE;
    head->next = nullptr;

    return head;
}


// Esta função recebe um ponteiro para um nó e um valor inteiro
// como entrada e insere um novo nó na primeira posição da lista 
// encadeada.
void insert_begin(NODE* lst, int value) 
{
    NODE* new_node = new NODE;

    new_node->data = value;
    new_node->next = lst->next;

    lst->next = new_node;
}


// Esta função recebe um ponteiro para um nó e um valor inteiro
// como entrada e insere um novo nó no final da lista encadeada.
void insert_end(NODE* lst, int value) 
{
    NODE *new_node, *it;

    if (lst->next == nullptr) {
        insert_begin(lst, value);
        return;
    }

    new_node = new NODE;
    it = lst->next;

    while (it->next != nullptr)
        it = it->next;

    new_node->data = value;
    new_node->next = it->next;

    it->next = new_node;
}


// Esta função recebe um ponteiro para um nó e remove o primeiro
// elemento da lista encadeada.
void remove_begin(NODE* lst) 
{
    if (is_empty(lst))
        return;

    NODE* aux = lst->next;
    lst->next = aux->next;

    delete aux;
}


// Esta função recebe um ponteiro para um nó e um valor inteiro 
// e remove o nó de uma posição específica da lista encadeada.
void remove_element(NODE* lst, int value) 
{
    if (is_empty(lst))
        return;

    NODE* prev = nullptr;
    NODE* current = lst->next;

    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (prev == nullptr)
        lst = current->next; // remove o elemento do inicio
    else
        prev->next = current->next; // remove o elemento do meio da lista
    
    delete current;
}


// Esta função recebe um ponteiro para um nó e remove todos os
// nós da lista encadeada.
void erase(NODE** lst) 
{
    if (is_empty(*lst))
        return;

    NODE *current, *next_node;

    current = *lst;
    next_node = nullptr;

    while (current != nullptr) {
        next_node = current->next;
        delete current;

        current = next_node;
    }

    *lst = NULL;
}


// Esta função recebe um ponteiro para um nó e um valor inteiro
// e procura na lista encadeada este nó especifico e retorna seu
// endereço.
NODE* search(NODE* lst, int value) 
{
    if (is_empty(lst))
        return NULL;

    NODE* target;

    for (target = lst->next; target != nullptr; target = target->next)
        if (target->data == value)
            return target;
    
    return NULL;
}


// Esta função imprime os valores de uma lista encadeada.
void print(NODE* lst) 
{
    if (lst == NULL)
        return;

    if (lst != nullptr) {
        std::cout << lst->data << " -> ";
        print(lst->next);
    }
}


// Esta função recebe um ponteiro para um nó e verifica se as lista
// encadeada está ou não vazia.
bool is_empty(NODE* lst) 
{
    return lst->next == nullptr;
}
