#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define MAX_N 100
#define MAX_M 100
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)

int n = 3, m = 3;
int arr[MAX_N][MAX_M];




void openArr() {
	FILE* fin = fopen("open.txt", "rt");
	fscanf(fin, "%d %d\n", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf(fin, "%d", &arr[i][j]);
		}
	}
	fclose(fin);
}

void nechetx10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 2 != 0) {
				arr[i][j] *= 10;
			}
		}
	}
}


void saveArr() {
	FILE* fout = fopen("save.txt", "wt");
	fprintf(fout, "%d %d\n", n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf(fout, "%d ", arr[i][j]);
		}
	}
	fclose(fout);
}

void delStr(int c) {
	for (int i = c; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

void all_random() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = (int)(rand() % 100);
		}
	}
}

void kratn10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] % 10 == 0) {
				arr[i][j] = arr[i][j] / 10;
			}
		}
	}
}




void repCol(int c) {
	if (m < MAX_M) {
		for (int i = 0; i < n; i++) {
			arr[i][m] = arr[i][c];
		}
		m++;
	}
}
void print_arr() {
	printf("�������: [%d][%d]\n", n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void inputArr() {
	int n1, m1;

	printf("n: ");
	scanf_s("%d", &n1);
	printf("m: ");
	scanf_s("%d", &m1);

	n = n1, m = m1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void all_nuli() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}



void ix10plusj() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;;
		}
	}
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("���������� �������: ");
		print_arr();
		printf("�������� ������ ��� ��������:\n");
		printf("1: ��������� ���������� i * 10 + j\n");
		printf("2: ��������� ������\n");
		printf("3: ��������� ���������� ����������\n");
		printf("4: ��� �������� ��������� � 10 ���\n");
		printf("5: ��� ������� 10 ��������� � 10 ���\n");
		printf("6: ������ ������\n");
		printf("7: ��������� ������\n");
		printf("8: ������� ������\n");
		printf("9: ������� ������\n");
		printf("10: �������������� �������\n");
		printf("\n");
		printf("-1: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			ix10plusj();
			break;
		case 2:
			all_nuli();
			break;
		case 3:
		{
			all_random();
			break;
		}
		case 4:
		{
			nechetx10();
			break;
		}
		case 5:
		{
			kratn10();
			break;
		}
		case 6:
		{
			inputArr();
			break;
		}
		case 7:
		{
			saveArr();
			break;
		}
		case 8:
		{
			openArr();
			break;
		}
		case 9:
		{
			int num;
			printf("����� ��������� ������: ");
			scanf_s("%d", &num);
			delStr(num);
			break;
		}
		case 10:
		{
			int c;
			printf("����� ������������ �������: ");
			scanf_s("%d", &c);
			repCol(c);
			break;
		}
		break;
		}
	} while (item != -1);
}


