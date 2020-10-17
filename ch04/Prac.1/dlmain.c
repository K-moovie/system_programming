#include <stdio.h>
#include <dlfcn.h>

main() {
	void*handle;
	int (*add) (int, int), (*subtract) (int, int), (*multiply) (int, int);
	float(*divide) (int, int);
	char *error;

	handle = dlopen("./lib/libcal.so", RTLD_LAZY);
	if(!handle) {
			fputs (dlerror(),stderr);
			exit(1);
	}
	
	add = dlsym(handle, "add");
	if ((error = dlerror()) != NULL) {
			fprintf (stderr, "%s", error);
			exit(1);
	}
	
	subtract = dlsym(handle, "subtract");
	if ((error = dlerror()) != NULL) {
			fprintf (stderr, "%s", error);
			exit(1);
	}

	multiply = dlsym(handle, "multiply");
	if ((error = dlerror()) != NULL) {
			fprintf (stderr, "%s", error);
			exit(1);
	}

	divide = dlsym(handle, "divide");
	if ((error = dlerror()) != NULL) {
			fprintf (stderr, "%s", error);
			exit(1);
	}

	int a = 0, b = 0;
	printf("사칙 연산을 수행할 수를 입력해 주세요.\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("add의 결과는: %d\n",(*add) (a, b));
	printf("subtract의 결과는: %d\n",(*subtract) (a, b));
	printf("multiply의 결과는: %d\n", (*multiply) (a, b));
	printf("divide의 결과는: %f\n", (*divide) (a, b));
	dlclose(handle);
}
