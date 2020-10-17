#include <stdio.h>
#include "callib.h"

main() {
	int a = 0, b = 0;
	printf("Please enter two numbers to perform the private operation..\n");
	scanf("%d", &a);
	scanf("%d", &b);

	printf("add: %d\n",add(a, b));
	printf("subtract: %d\n",subtract(a, b));
	printf("multiply: %d\n",multiply(a, b));
	printf("divide: %f\n",divide(a, b));
	return 0;
}
