#include<stdio.h>

#define max 20

void main(void)

{

	int num[max] = { 0,1 };

	int number;

	printf("請輸入幾個整數:");

	scanf_s("%d", &number);

	for (int i = 2; i < number; i++)

	{

		num[i] = num[i - 1] + num[i - 2];

	}

	for (int j = 0; j < number; j++)

	{

		printf("Fib(%d)=%d\n", j, num[j]);

	}

}