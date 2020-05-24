#include <stdio.h>


int main() {
	FILE *f;
	int arr[10];
	int x[10];
	int k;

	/* generate array of numbers */
	for (k = 0; k < 10; k++)
	  arr[k] = k;

	/* write array to file */
	f = fopen("data.bin", "wb");
	fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), f);
	fclose(f);

	/* read array from file */
	f = fopen("data.bin", "rb");
	fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), f);
	fclose(f);

	/* print array */
	for (k = 0; k < 10; k++)
	  printf("%d", x[k]);

	return 0;
}
