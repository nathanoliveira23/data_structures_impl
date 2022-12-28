struct stack {
    int* data;
    int top;
    int capacity;
};

stack* initialize(int size);
bool is_empty(stack* stack);
bool is_full(stack* stack);
void push(stack* stack, int value);
void pop(stack* stack);
int peek(stack* stack);
void print(stack* stack);