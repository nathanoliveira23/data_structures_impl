#include <iostream>
#include "headers/queue.h"

int main() {
    const int size = 4;
    queue* queue = new_queue(size);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    dequeue(queue);

    print(queue);
}