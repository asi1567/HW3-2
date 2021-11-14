#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Z, z;
	printf("Give an alphabet: ");
	scanf_s("%c", &Z);
	z = Z + 32;
	printf("Return: %c\n", z);
	system("pause");
	return 0;
}