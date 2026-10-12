#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("n = ");
        scanf("%d", &n);

        if (n >= 1 && n <= 9) {
            break;
        }
        else {
            printf("1∼9 사이의 숫자를 입력하세요.\n\n");
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}