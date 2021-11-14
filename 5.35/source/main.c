#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int input);

int main(void)
{
	int num;

	printf("輸入你要算第幾位費氏數列數字:");
	scanf_s("%d", &num);

	while (num > 94 || num < 1)
	{
		printf("請輸入正整數且最大只能至94\n");
		printf("輸入你要算第幾位費氏數列數字:");
		scanf_s("%d", &num);
	}

	fibonacci(num);
	printf("\nfibonacci(%d)=%I64u\n\n", num, fibonacci(num));
	printf("此系統最大顯示至第94位:%I64u\n\n", fibonacci(94));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int input)
{
	unsigned long long int fibo[95];//第94位已接近2^64-1所以第95位會溢位
	fibo[1] = 0;
	fibo[2] = 1;
	for (int i = 3; i <= input; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	//for (int i = 1; i <= n; i++)//全顯示檢驗
	//    printf("%d:%I64u \n",i,fibo[i]);
	return fibo[input];
}