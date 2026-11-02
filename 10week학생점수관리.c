#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main() {
	int number[SIZE];
	int total = 0;
	int max, min;
	double average;
	
	srand((unsigned int)time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = rand() % 101;
	}
	max = number[0];
	min = number[0];
	printf("학생별 점수\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%2d번 학생: %3d점\n", i + 1, number[i]);
		total += number[i];
		if (number[i] > max) {
			max = number[i];
		}
		if (number[i] < min) {
			min = number[i];
		}
	}
	average = (double)total / SIZE;
	
	printf("점수 통계");
	printf("학생 수: %d명\n", SIZE);
	printf("최댓값: %d점\n", max);
	printf("최솟값: %d점\n", min);
	printf("평균: %.2f점\n", average);

	return 0;
}