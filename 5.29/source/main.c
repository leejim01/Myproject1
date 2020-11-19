#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int ans = 1;
	int i = 2; 
	scanf("%d %d", &a, &b);
	if (a == 1 || b == 1) printf("%d", a*b);
	else if (a >= i && b >= i)
	{
		
		while (a >= i && b >= i)
		{
			while (a%i == 0 && b%i == 0)
			{
				ans = ans * i;
				a /= i;
				b /= i;
			}
			i++;
		}
		printf("%d", ans*a*b);
	}
	else printf("Error\n");
	return 0;
}