#include <stdio.h>

int watch_variable_another(void)
{
	int k;
	for (k = 0; k < 5; k++)
	{
		fprintf(stdout, "k:%d\n", k);
	}
	return 0;
}
int main(int argc, char *argv[])
{
	int i, j = 0;

	watch_variable_another();

	for (i = 0; i < 5; i++)
	{
		fprintf(stdout, "i :%d,", i);
		j++;
		fprintf(stdout, "j :%d\n", j);
	}

	return 0;
}
