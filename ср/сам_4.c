#include <stdio.h>
void main() {
	int  n, m, k, i;

	scanf_s("%d%d", &n, &m);

	for (i = 1, k = 1; i <= m; i++, k *= n)
		printf("%d\n", k);

	for (; i >= 1; i--, k /= n)
		printf("%d ", k);
}
