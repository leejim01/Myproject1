#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int a, b, c;
	printf("�п�J�Ĥ@�Ӿ�ƼƦr:");
	scanf("%d", &a);
	printf("�п�J�ĤG�Ӿ�ƼƦr:");
	scanf("%d", &b);
	printf("�п�J�ĤG�Ӿ�ƼƦr:");
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