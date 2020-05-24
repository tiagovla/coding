#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr1, *ptr2;
	ptr1 = malloc(10*sizeof(*ptr1));
	ptr2 = calloc(5, sizeof(*ptr2));
	ptr2 = realloc(ptr2,10*sizeof(*ptr2));

	if (ptr1 != NULL) {
	  *(ptr1 + 2) = 50;  /* assign 50 to third int */
	}
	if (ptr2 != NULL) {
	  *(ptr2 + 2) = 42;  /* assign 50 to third int */
	}

	printf("%d\n", *(ptr1 + 2));
	printf("%d\n", ptr2[2]);

	free(ptr1);


	return 0;
}
