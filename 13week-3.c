#include <stdio.h>
#include "arrayUtil.h"
#define SIZE 16
int main()
{
	int binary[SIZE];
	int decimal = 255;
	initArray(binary, SIZE, 0);
	dec_to_bin(binary, decimal, SIZE);
	printArray(binary, SIZE);

	return 0;
}