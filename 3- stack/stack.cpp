#include <iostream>
#include "headers/stack.h"

stack* initialize(int size) {
    stack* new_stack = new stack;
    new_stack->data = new int[size];
    new_stack->top = -1;
    new_stack->capacity = size;

    return new_stack;
}

bool is_empty(stack* stack) {
    return stack->top == -1;
}

bool is_full(stack* stack) {
    return stack->top == stack->capacity - 1;
}


void push(stack* stack, int value) {
    if (is_full(stack)) {
        std::cout << "The stack is full. Cannot insert new elements.\n";
        exit(EXIT_FAILURE);
    }

    stack->top++;
    stack->data[stack->top] = value;
}

void pop(stack* stack) {
    if (is_empty(stack)) {
        std::cout << "The stack is empty. It is not possible to remove elements.\n";
        exit(EXIT_FAILURE);
    }

    stack->data[stack->top] = 0;
    stack->top--;
}

int peek(stack* stack) {
    int top = stack->data[stack->top];

    return top;
}

void print(stack* stack) {
    int i;

    for (i = 0; i <= stack->top; i++) 
        std::cout << stack->data[i] << "\t";
}