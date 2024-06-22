//
// Created by kacpe on 26.05.2024.
//

#include "queue.h"

#define SIZE 3
int queue[SIZE] = {0};
unsigned int size = 0;
unsigned int readIndex = 0;
unsigned int writeIndex = 0;

bool isQueueFull(void) {
    return size >= SIZE ? true : false;
}

bool isQueueEmpty(void) {
    return size == 0 ? true : false;
}

void write(int data) {
    if (!isQueueFull()) {
        queue[writeIndex % SIZE] = data;
        writeIndex++;
        size++;
    }
}

int first(void) {
    int data = queue[readIndex % SIZE];
    return data;
}

int read(void) {
    int data = queue[readIndex % SIZE];
    readIndex++;
    size--;
    return data;
}