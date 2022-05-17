#include <stdio.h>

int main()
{
	char s[80], *p;
	int len = 0;

	printf("Enter a string : ");
	scanf_s("%s", s, sizeof(s));

	p = s;
	while (*p) {
		len++;
		p++;
	}
	printf("length of stiring %s = %d\n",s,len);
}
