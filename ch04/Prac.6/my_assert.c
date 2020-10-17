#include <stdlib.h>
#include "assertlib.h"

void __assert_fail (const char *assertion, const char *file, unsigned int line, const char *function) {
	printf("%s:%s:%u:%s: Assertion '%s' failed.\n%n", __progname, file, line, function, assertion);
	abort();
}
	
