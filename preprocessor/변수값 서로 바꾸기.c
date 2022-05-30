#include <stdio.h>
#define swap(a, b) { int tmp; tmp = (a); (a) = (b); (b) = tmp; } #define print_var(name, val) printf("%s = %d\n", (name), (val))
int main(void)
{
int x = 50, y = 100;
swap(x, y); print_var("x", x); print_var("y", y); return 0;
}
