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

void initArray(int* array, int size, int initVal)
{
    for (int i = 0; i < size; i++) {
        array[i] = initVal;
    }
}

void dec_to_bin(int* bin, int dec, int size)
{
    int mod;
    initArray(bin, size, 0);
    size--;
    while (dec != 0) {
        mod = dec % 2;
        bin[size] = mod;
        size--;
        dec /= 2;
        if (size < 0) {
            printf("array is full\n");
            break;
        }
    }
}