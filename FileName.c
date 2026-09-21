#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void exerc1(void) {
	
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다. \n", inch, cm);
}
void exerc2(void) {
	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.", C, F);
}
double circle(double r) {
	return r * r * 3.14;
}

void exerc3(void) {
		
		double r;

		scanf("%lf", &r);

		printf("반지름 %lf인 원의 넓이는 %lf도 입니다. \n", r, circle(r));
}
void exerc4(void) {
	double total;
	double hours, minutes, seconds;

	scanf("%lf", &total);

	hours = (int)(total / 3600);
	minutes = (int)((total - hours * 3600) / 60);
	seconds = total - hours * 3600 - minutes * 60;

	printf("%.0f시간 %.0f분 %.0f초\n", hours, minutes, seconds);
}
void exerc5(void) {
	double score, attendance;
	int passed;

	scanf("%lf %lf", &score, &attendance);

	passed = (score >= 60) && (attendance >= 80);

	printf("합격 여부: %d (1: 합격, 0: 불합격)\n", passed);

}
void exerc6(void) {
	unsigned int permission;
	const unsigned int EXEC = 0x04;

	scanf("%x", &permission);

	permission |= EXEC;

	printf("권한: 0x%02X\n", permission);
}
void exerc7(void) {
	int year;
	int leap;

	scanf("%d", &year);

	leap = (year % 4 == 0 && year % 100 != 0)
		|| (year % 400 == 0);
	printf("%d\n", leap);
}
int main(void) {
	exerc1();
	exerc2();
	exerc3();
	exerc4();
	exerc5();
	exerc6();
	exerc7();

	return 0;
}