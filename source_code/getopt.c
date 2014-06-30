#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char t;
	while ((t = getopt(argc, argv, "vp:")) != -1)
	{
		switch (t)
		{
			case 'v': fprintf(stdout, "v1.0\n"); break;
			case 'p': fprintf(stdout, "opt:%s\n", optarg); break;
			default:;
		}
	}
	return 0;
}
