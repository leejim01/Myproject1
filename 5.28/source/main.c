#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int I = 2;  
	while (I)  
	{
		char b;
		scanf("%c", &b);
		if (b >= 'A' && b <= 'Z')
		{
			b = b + 32;
			printf("%c", b);
		}
		else if (b >= 'a' && b <= 'z')
		{
			b = b - 32;
			printf("%c", b);
		}
		printf("\n");
	}
	return 0;
}