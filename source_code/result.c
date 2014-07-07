#include <stdio.h>
int
add(int a, int b)
{
	return a + b;
}

int
main(int argc, char *argv[])
{
	int result = 0;
	result = add(1, 2);
	fprintf(stdout, "result :%d\n", result);
	return 0;
}
