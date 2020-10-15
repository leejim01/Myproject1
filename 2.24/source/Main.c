#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("叫块俱计:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("%d 案计", number);
	else
		printf("%d 计", number);

	return 0;
}