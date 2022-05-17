#include <stdio.h>

int main()
{
	int a, b, *p;
	a = 10;
	p = &a;
	b = *p; // b = a
	*p = 20;
	printf("a = %d. b = %d\n", a, b);
}
