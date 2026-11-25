#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#include "arrayUtil.h"

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