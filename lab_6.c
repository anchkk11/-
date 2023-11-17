#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int n;
	printf("задача 4 \n");
	scanf_s("%d", &n);
	int c = 2;
	while (n > 0) {
		printf("%d ", c);
		c = c + 2;
		n = n - 1;
	}*/

	int n, a;
	printf("\n задача 5 \n");
	scanf_s("%d", &n);
	scanf_s("%d", &a);
	int c = a;
	do {
		printf("%d ", c);
		c = c + a;
		n = n - 1;
	} while (n > 0);

	/*printf("\n задача 7 Арифметическая прогрессия задана условиями a1 = 44, a(n+1) = a(n) - 17. Найдите сумму первых 14 её членов. \n");
	int n = 44;
	int c = 0;
	int i = 14;
	do {
		c = c + n;
		n = n - 17;
		i = i - 1;
	} while (i <= 0);
	printf("%d ", c);*/

}






