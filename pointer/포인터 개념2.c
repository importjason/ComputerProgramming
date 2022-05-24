#include <stdio.h>

int main() {
	int num = 9, *pnum = &num;
	printf("%p %p %d\n", &pnum, pnum, &pnum);
	printf("%p %d %d\n", &num, num, *num);
}
