#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int number[SIZE];
    int sum = 0;
    int max = 0;
    int min = 100;
    int i, j, temp;

    srand((unsigned int)time(NULL));

    for (i = 0; i < SIZE; i++) {
        number[i] = rand() % 101;

        printf("%d번 학생: %d점\n", i + 1, number[i]);

        sum += number[i];

        if (number[i] > max) {
            max = number[i];
        }

        if (number[i] < min) {
            min = number[i];
        }
    }

    printf("\n최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균: %.2f점\n", (double)sum / SIZE);

    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (number[j] < number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    printf("\n버블 정렬 결과(내림차순)\n");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }

    printf("\n");

    return 0;
}