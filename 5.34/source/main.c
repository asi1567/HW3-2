#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int base, exp;
	int ans = 1;
	printf("Enter power(base,exponent): ");
	scanf_s("%d %d", &base, &exp);
	if (exp == 0)
	{
		ans = 1;
	}
	for (int i = 1; i <= exp; i++)
	{
		ans = ans * base;
	}
	printf("return: %d\n", ans);
	system("pause");
	return 0;
}
