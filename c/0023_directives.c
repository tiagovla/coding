#include <stdio.h>

// #undef MAX
#ifndef MAX
	#define MAX 100
#endif

int main() {
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%d\n",MAX);
	return 0;
}
