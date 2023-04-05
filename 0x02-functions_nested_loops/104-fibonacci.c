#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, seperated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)

{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_hf1, f1_hf2, f2_hf1, f2_hf2;
	unsigned long hf1, hf2;

	for (c = 0; c < 92; c++)
	{
	sum = f1 + f2;
	printf("%lu, ", sum);
	f1 = f2;
	f2 = sum;
	}
	f1_hf1 = f1 / 10000000000;
	f2_hf1 = f2 / 10000000000;
	f1_hf2 = f1 % 10000000000;
	f2_hf2 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
	hf1 = f1_hf1 + f2_hf1;
	hf2 = f1_hf2 + f2_hf2;
	if (f1_hf2 + f2_hf2 > 9999999999)
	{
	hf1 += 1;
	hf2 %= 10000000000;
	}
	printf("%lu%lu", hf1, hf2);
	if (c != 98)
	printf(", ");
	f1_hf1 = f2_hf1;
	f1_hf2 = f2_hf2;
	f2_hf1 = hf1;
	f2_hf2 = hf2;
	}
	printf("\n");
	return (0);
}
