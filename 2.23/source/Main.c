#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a, b, c;
	printf("請輸入第一個整數數字:");
	scanf("%d", &a);
	printf("請輸入第二個整數數字:");
	scanf("%d", &b);
	printf("請輸入第二個整數數字:");
	scanf("%d", &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("%d>%d>%d\n", a, b, c);
		}
		else 
		{
			if (a > c)
			{
				printf("%d>%d>%d\n", a, c, b);
			}
			else
			{
				printf("%d>%d>%d\n", c, a, b);
			}
		}
	}
	else 
	{
		if (a > c)
		{
			printf("%d>%d>%d\n", b, a, c);
		}
		else 
		{
			if (b > c)
			{
				printf("%d>%d>%d\n", b, c, a);
			}
			else //c>b
			{
				printf("%d>%d>%d\n", c, b, a);
			}
		}
	}
	system("PAUSE");
}