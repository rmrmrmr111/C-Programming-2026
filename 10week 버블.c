#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int number[SIZE];
    int i, j, temp;

    srand((unsigned int)time(NULL));

    printf("정렬 전: ");

    for (i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;
        printf("%d ", number[i]);
    }

    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (number[j] < number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    printf("\n정렬 후(내림차순): ");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }

    printf("\n");

    return 0;
}