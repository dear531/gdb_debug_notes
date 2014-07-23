#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i = 0;
		i < 5;
		i++)
		fprintf(stdout, "i :%d\n", i);

	return 0;
}
