#include <stdio.h>
void main() {
	int a, b, s;

	scanf_s("%d%d", &a, &b);

	s = 0;
	while (a <= b) {
		s += a;
		a += 1;
		printf("%d ", s);
	}
}
