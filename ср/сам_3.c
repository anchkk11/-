// Задача 22.A
void main() {
	int  n, i, j;
	scanf_s("%d", &n);

	i = 1;
	do {
		j = 1;

		do {
			if (j >= i)
				printf("[]");
			else
				printf("..");
			j++;
		} while (j <= n);

		printf("\n");
		i++;
	} while (i <= n);
}
