#include <iostream>
#include <cstdlib>
#include "headers/queue.h"

queue* new_queue(int size) {
    queue* new_queue = new queue;
    new_queue->data = new int[size];
    new_queue->first = 0;
    new_queue->last = 0;
    new_queue->capacity = size;

    return new_queue;
}

bool is_empty(queue* queue) {
    return queue->last == queue->first;
}

bool is_full(queue* queue) {
    return queue->last - queue->first == queue->capacity;
}

void enqueue(queue* queue, int value) {
    if (is_full(queue)) {
        std::cout << "Unable to insert elements into the queue. \n";
        exit(EXIT_FAILURE);
    }

    queue->data[queue->last % queue->capacity] = value;
    queue->last++;
}

void dequeue(queue* queue) {
    if (is_empty(queue)) {
        std::cout << "It is not possible to remove element from an empty queue.\n";
        exit(EXIT_FAILURE);
    }

    queue->data[queue->first % queue->capacity] = NULL;
    queue->first++;
}

void print(queue* queue) {
    int i;

    for (i = queue->first; i < queue->last; i++)
        std::cout << queue->data[i % queue->capacity] << "\t";
}