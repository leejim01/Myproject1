
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double H, W, BMI;

	printf("How tall are you?(cm)\n");
	scanf("%lf", &H);

	printf("How much do you weigh?(kg)\n");
	scanf("%lf", &W);

	BMI = W / ((H / 100)*(H / 100));
	printf("Your BMI is %lf\n", BMI);

	if (BMI < 18.5) {
		printf("過輕\n");
	}
	if (BMI >= 18.5&&BMI < 24) {
		printf("普通\n");
	}
	if (BMI >= 24 && BMI < 27) {
		printf("肥胖\n");
	}
	if (BMI >= 27 && BMI < 30) {
		printf("輕度肥胖\n");
	}
	if (BMI >= 30 && BMI < 35) {
		printf("中度肥胖\n");
	}
	if (BMI > 35) {
		printf("重度肥胖\n");
	}

	return 0;
}