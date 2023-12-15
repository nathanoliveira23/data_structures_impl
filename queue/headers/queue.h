struct queue {
    int first;
    int last;
    int capacity;
    int* data;
};

queue* new_queue(int size);
void enqueue(queue* queue, int value);
void dequeue(queue* queue);
bool is_empty(queue* queue);
bool is_full(queue* queue);
void print(queue* queue);