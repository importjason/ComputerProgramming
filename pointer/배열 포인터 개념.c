#include <stdio.h>

int main() {
	int arr[3], *p = arr;
	int tmp = 0;

	for (p = arr; p < arr + 3; p++) {
		scanf_s("%d", p, sizeof(*p));
	}

	p = arr;

	printf("%d %d %d", *p, *(p + 1), *(p + 2));
