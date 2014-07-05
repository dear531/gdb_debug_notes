#include <stdio.h>

int
main (int argc, char *argv[])
{
	int a[10] = {0};
	int i;
	for (i = 0; i < sizeof (a) / sizeof (*a); i++)
		fprintf(stdout, "a[%d]:%d\n", i, a[i]);
	for (i = 0; i < sizeof (a) / sizeof (*a); i++)
		a[i] = i;
	for (i = 0; i < sizeof (a) / sizeof (*a); i++)
		fprintf(stdout, "a[%d]:%d\n", i, a[i]);

	return 0;
}
