#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("請輸入一個整數:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("%d 偶數", number);
	else
		printf("%d 奇數", number);

	return 0;
}