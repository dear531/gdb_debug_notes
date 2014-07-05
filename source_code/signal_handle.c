#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

void sig_int(int signum)
{
	int err = errno;
	errno = err;
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
