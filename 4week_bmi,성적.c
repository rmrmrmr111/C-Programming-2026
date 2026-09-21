#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exerc1(void) {
    double midterm, final_exam, assignment;
    double weighted_score;

    scanf("%lf %lf %lf", &midterm, &final_exam, &assignment);

    weighted_score = (midterm * 0.3)
        + (final_exam * 0.4)
        + (assignment * 0.3);

    printf("weighted_score=%.2f\n", weighted_score);
}
void exerc2(void) {
    double height, weight;
    double bmi;

    scanf("%lf %lf", &height, &weight);

    bmi = weight / (height * height);

    printf("bmi=%.2f\n", bmi);
}
int main(void) {
    exerc1();
    exerc2();

    return 0;
}