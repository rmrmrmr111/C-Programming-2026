#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

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

int main()
{
    int array1[SIZE] = { 0 };
    int array2[SIZE] = { 0 };

    srand(time(NULL));
    inputArray(array1, SIZE);
    copyArray(array2, array1, SIZE);

    printf("array1 -->");
    printArray(array1, SIZE);

    printf("array2 -->");
    printArray(array2, SIZE);

    return 0;
}