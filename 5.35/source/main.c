#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int input);

int main(void)
{
	int num;

	printf("��J�A�n��ĴX��O��ƦC�Ʀr:");
	scanf_s("%d", &num);

	while (num > 94 || num < 1)
	{
		printf("�п�J����ƥB�̤j�u���94\n");
		printf("��J�A�n��ĴX��O��ƦC�Ʀr:");
		scanf_s("%d", &num);
	}

	fibonacci(num);
	printf("\nfibonacci(%d)=%I64u\n\n", num, fibonacci(num));
	printf("���t�γ̤j��ܦܲ�94��:%I64u\n\n", fibonacci(94));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int input)
{
	unsigned long long int fibo[95];//��94��w����2^64-1�ҥH��95��|����
	fibo[1] = 0;
	fibo[2] = 1;
	for (int i = 3; i <= input; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	//for (int i = 1; i <= n; i++)//���������
	//    printf("%d:%I64u \n",i,fibo[i]);
	return fibo[input];
}