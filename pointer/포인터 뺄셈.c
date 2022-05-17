#include <stdio.h>

int main()
{
	int *p, *q, x;
	p = 4012;
	q = 4000;
	x = p - q;

	printf("%d %d %d\n", p, q, x);
	/** 포인터 간의 뺄셈의 결과는 두 포인터의 주소를
	뺄셈한 결과를 자료형의 크기로 나눈 것**/
}
