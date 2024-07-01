#include <stdio.h>

//First fonction
int factorielle(int number)
{
	int result = 1;
	int i;
	for (i = number; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

float pow(float number, int exponent)
{
	float result = 1;
	int i;
	for (i = 0; i <= exponent; i++)
	{
		result = result * number;
	}
	return result;
}

float exp(float x)
{
	int proximation = 16;
	int i;
	float result = 0;
	for (i = 0; i < proximation; i++)
	{
		result = result + (pow(x, i))/(factorielle(i));
	}
	return result;
}

int main()
{
	//An exemple of code
	printf("Hello World !\n");

	printf("Number e: %f\n", exp(1));
	return 0;
}
