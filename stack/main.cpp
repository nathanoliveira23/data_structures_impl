#include<iostream>
#include "headers/stack.h"

int main() {
    // EXAMPLE OPERATIONS
    const int size = 4;
    stack* stack = initialize(size);

    push(stack, 45);
    push(stack, 50);
    push(stack, 55);
    push(stack, 60);

    pop(stack);
    pop(stack);

    int top = peek(stack);
    std::cout << top << "\n";

    print(stack);
}