#include <stdio.h>
#include <stdlib.h>

void printArray(int* start, int size)
{
    for (int i = 0; i < size; i++) printf("%d ", *(start + i));
    printf("\n");
}

void inputArray(int* start, int size)
{
    for (int i = 0; i < size; i++) *(start + i) = rand() % 1000;
}

void copyArray(int* target, int* source, int size)
{
    for (int i = 0; i < size; i++) {
        target[i] = *(source + i);
    }
}