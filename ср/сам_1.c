#include <stdio.h>
void main() {
	int a, b, c, d, e;

	scanf_s("%d%d%d", &a, &b, &c);
	d = 0;
	e = 0;

	// если a делится на 2 без остатка
	if (a % 2 == 0) {
		d++;
		e += a;
	}
	// если b делится на 2 без остатка
	if (b % 2 == 0) {
		d++;
		e += b;
	}
	// если c делится на 2 без остатка
	if (c % 2 == 0) {
		d++;
		e += c;
	}

	printf("%d %d", d, e);
}
