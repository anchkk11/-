#include <stdio.h>
#include <math.h>
#include <Windows.h>


void Task1() {
	printf("Task1() START\n");
	int N = 4;
	int M = 3;
	int i, j;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			printf("%d%d ", i, j);
		}
		printf("\n");
	}
	printf("Task1() FINISH\n");
}
void Task2() {
	printf("Task2() START\n");
	int i = 1, j;
	do {
		j = 1;
		do {
			printf("%4d", i * j);
			j++;
		} while (j <= 10);

		printf("\n");
		i++;
	} while (i <= 10);
	printf("Task2() FINISH\n");
}

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = -1;
	do {

		printf("\n");
		printf("\n");
		printf("�������� ������ ��� ��������:\n");
		printf("1: ������ 1 (i * 10 + j)\n");
		printf("2: ������ 2 (������� ��������)\n");
		printf("\n");
		printf("0: ����� �� ���������\n");

		scanf_s("%d", &n);
		switch (n) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		}
	} while (n != 0);
}
	 





	





