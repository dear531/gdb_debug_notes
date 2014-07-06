#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

int flag = 0;

void sig_int(int signum)
{
	int err	= errno;
	flag	= 1;
	errno	= err;
	return;
}

int main(void)
{
	int i;
#if 1
	signal(SIGINT, sig_int);
#endif
	for (i = 0; ; i++)
	{
		sleep(1);
		fprintf(stdout, "i :%d\n", i);
	}

	return 0;
}
