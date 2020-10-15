#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	float a, b, c, d, e, f;
	printf("一整天的總里程數:\n");
	scanf("%f", &a);
	printf("汽油一公升/加侖多少錢:\n");
	scanf("%f", &b);
	printf("平均一公升/加侖能行駛多少公里:\n");
	scanf("%f", &c);
	printf("一天的停車費:\n");
	scanf("%f", &d);
	printf("一天的通行費:\n");
	scanf("%f", &e);

	f = (a*c) / b + (d + e);
	printf("一天開車所需要的花費:%f\n",f);
	return 0;
}
