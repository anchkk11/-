#include <stdio.h>
void main() {
	int a, b, c, d, e;

	scanf_s("%d%d%d", &a, &b, &c);
	d = 0;
	e = 0;

	// ���� a ������� �� 2 ��� �������
	if (a % 2 == 0) {
		d++;
		e += a;
	}
	// ���� b ������� �� 2 ��� �������
	if (b % 2 == 0) {
		d++;
		e += b;
	}
	// ���� c ������� �� 2 ��� �������
	if (c % 2 == 0) {
		d++;
		e += c;
	}

	printf("%d %d", d, e);
}
