#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "13-5arrayUtil.h"

int main()
{
	int lotto[6] = {0};
	srand(time(NULL));
	lottoGame(lotto, 6);
	printArray(lotto, 6);
	return 0;
}