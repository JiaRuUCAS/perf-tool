#include "builtin.h"
#include "perf.h"

int
cmd_libtest(int argc, const char **argv,
				const char *prefix __maybe_unused)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		fprintf(stdout, "%s\t", argv[i]);
	fprintf(stdout, "\n");

	return 0;
}
