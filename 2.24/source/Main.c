#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;

	printf("�п�J�@�Ӿ��:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("%d ����", number);
	else
		printf("%d �_��", number);

	return 0;
}