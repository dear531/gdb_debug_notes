#include <stdio.h>

int
main (int argc, char *argv[])
{
	struct{
		int a;
		int b;
	}s = {1, 2};
	fprintf(stdout, "s.a:%d, s.b:%d\n", s.a, s.b);
	
	s.a = 3;
	s.a = 4;

	fprintf(stdout, "s.a:%d, s.b:%d\n", s.a, s.b);

	return 0;
}
