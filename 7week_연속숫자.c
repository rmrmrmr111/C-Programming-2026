#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, prev = 0, count = 0;
    int input_count = 0;

    while (count < 3) {
        printf("1∼9 숫자를 입력하세요: ");
        scanf("%d", &num);
        input_count++;

        if (num >= 1 && num <= 9) {
            if (num == prev) {
                count++;
            }
            else {
                count = 1;
                prev = num;
            }
        }
        else {
            printf("1∼9 사이의 숫자를 입력하세요.\n");
            input_count--;
        }
    }

    printf("총 입력 횟수: %d\n", input_count);

    return 0;
}