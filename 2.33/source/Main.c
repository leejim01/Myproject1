#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	float a, b, c, d, e, f;
	printf("�@��Ѫ��`���{��:\n");
	scanf("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:\n");
	scanf("%f", &b);
	printf("�����@����/�[�گ��p�h�֤���:\n");
	scanf("%f", &c);
	printf("�@�Ѫ������O:\n");
	scanf("%f", &d);
	printf("�@�Ѫ��q��O:\n");
	scanf("%f", &e);

	f = (a*c) / b + (d + e);
	printf("�@�Ѷ}���һݭn����O:%f\n",f);
	return 0;
}
