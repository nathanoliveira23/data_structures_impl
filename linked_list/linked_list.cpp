#include <iostream>
#include <cstdlib>
#include "headers/linked_list.h"

// Inicializa uma lista vazia
node* new_linked_list() {
    node* head = new node;
    head->next = NULL;

    return head;
}

// Insere elemento na primeira posição da lista
void insert_begin(node* list, int value) {
    node* new_node = new node;

    new_node->data = value;
    new_node->next = list->next;

    list->next = new_node;
}

// Insere um novo elemento na posição final da lista
void insert_end(node* list, int value) {
    node* new_node = new node;
    node* p = list->next;

    if (list->next == NULL) {
        new_node->data = value;
        new_node->next = list->next;

        list->next = new_node;
    }
    else {
        while (p->next != NULL) 
            p = p->next;
        
        new_node->data = value;
        new_node->next = p->next;

        p->next = new_node;
    }
}

// Remove o elemento da primeira posição da lista
void remove_begin(node* list) {
    node* aux = list->next;
    list->next = aux->next;

    delete aux;
}

// Remove um elemento no meio da lista
void remove_element(node* list, int value) {
    node* prev = NULL;
    node* p = list->next;

    while (p != NULL && p->data != value) {
        prev = p;
        p = p->next;
    }

    if (prev == NULL)
        list = p->next; // remove o elemento do inicio
    else
        prev->next = p->next; // remove o elemento do meio da lista
    
    delete p;
}

// Limpa toda a lista elimindando todos os elementos dela
void erase(node* list) {
    node* p = list->next;

    while (p != NULL) {
        node* t = p->next;

        delete p;
        p = t;
    }
}

node* search(node* list, int value) {
    node* p;

    for (p = list->next; p != NULL; p = p->next)
        if (p->data == value)
            return p;
    
    return NULL;
}

void print(node* list) {
    node* p;

    for (p = list->next; p != NULL; p = p->next)
        std::cout << p->data << "\t";
}

bool is_empty(node* list) {
    return list == NULL;
}