#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j = 0;
	for (i = 0; i < 5; i++)
	{
		fprintf(stdout, "i :%d,", i);
		j++;
		fprintf(stdout, "j :%d\n", j);
	}
	return 0;
}
