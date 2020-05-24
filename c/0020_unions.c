#include <stdio.h>

union val {
	int int_num;
	float fl_num;
	char str[5];
};

void main() {
	union val test;
	test.int_num = 42;
	printf("%d\n", test.int_num);
	printf("%d",sizeof(test));
}
