
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
		printf("�L��\n");
	}
	if (BMI >= 18.5&&BMI < 24) {
		printf("���q\n");
	}
	if (BMI >= 24 && BMI < 27) {
		printf("�έD\n");
	}
	if (BMI >= 27 && BMI < 30) {
		printf("���תέD\n");
	}
	if (BMI >= 30 && BMI < 35) {
		printf("���תέD\n");
	}
	if (BMI > 35) {
		printf("���תέD\n");
	}

	return 0;
}