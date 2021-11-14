#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, LCM, GCD, remainder,multipy;
	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);
	multipy = num1 * num2;
	if (num1 > num2)
	{
		remainder = num1 % num2;
		while (remainder != 0)
		{
			num1 = num2;
			num2 = remainder;
			remainder = num1 % num2;
		}
		GCD = num2;
	}
	else
	{
		remainder = num2 % num1;
		while (remainder != 0)
		{
			num2 = num1;
			num1 = remainder;
			remainder = num2 % num1;
		}
		GCD = num1;
	}
	LCM = multipy / GCD;
	printf("LCM is: %d", LCM);
	system("pause");
	return 0;
}