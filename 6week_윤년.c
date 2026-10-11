#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year;
    int month;
    int days;

    printf("년도 입력 : ");
    scanf("%d", &year);

    printf("월 입력(1∼12) : ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
        switch (month) {
        case 2:
            // 윤년이면 29일, 평년이면 28일
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            }
            else {
                days = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
        printf("%d년 %d월은 %d일까지 있습니다.", year, month, days);
    }

    return 0;
}