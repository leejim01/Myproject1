#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(void)
{
	int m, n;
	long int ans;
	long int a, b;
	printf("請輸入底數:");
	scanf_s("%d", &m);
	printf("請輸入指數:");
	scanf_s("%d", &n);
	ans=pow(m, n);
	printf("(%d,%d)=%d", m, n,ans);
	system("pause");
	return 0;
}