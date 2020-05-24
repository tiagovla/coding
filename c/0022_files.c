#include <stdio.h>


int main() {
	FILE *f;
	char *filename = "data.txt";
	int c, stock;
  	char buffer[200], item[10];
  	float price;

	/* write to file */
	f = fopen(filename, "w");
	fprintf(f, "Inventory\n");
	fprintf(f, "%d %s %f\n", 100, "Widget", 0.29);
	fputs("End of File", f);
	fclose(f);

	/* read from file */
	f = fopen(filename, "r");

	fgets(buffer, 20, f);    /* read a line */
 	printf("%s\n", buffer);

 	fscanf(f, "%d%s%f", &stock, item, &price); /* read data */
 	printf("%d  %s  %4.2f\n", stock, item, price);

 	while ((c = getc(f)) != EOF) /* read the rest of the file */
   		printf("%c", c);

 	fclose(f);
	
	return 0;
}
