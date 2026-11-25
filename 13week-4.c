#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "13-4arrayUtil.h"

int main()
{
	int dice[6] = { 0 };
	int count = 60000;
	srand(time(NULL));
	diceTest(dice, count);
	printArray(dice, 6);

	return 0;
}