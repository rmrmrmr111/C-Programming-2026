#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int score, count = 0;
    int total = 0;

    while (count < 3) {
        printf("점수를 입력하세요: ");
        scanf("%d", &score);

        if (score >= 0 && score <= 100) {
            total += score;
            count++;
        }
        else {
            printf("0∼100 사이의 점수를 입력하세요.\n");
        }
    }

    printf("평균: %.2f\n", total / 3.0);

    return 0;
}