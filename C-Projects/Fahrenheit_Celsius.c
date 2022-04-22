#include <stdio.h>
/**
 * Print Fahrenheit-Celsius table
 * Convert Fahrenheit to Celsius
 * for fahren = 0, 10, ..., 212
 */
main()
{
	int fahren, cels;
	int lower, upper, step;

	lower = 0; /* lower limit of the temperature table */
	upper = 212; /* upper limit of the temperature table */
	step = 10; /* step size */

	fahren = lower; /* assign fahrenheit to the lower limit value */
	while (fahren <= upper) {
		cels = 5 * (fahren - 32) / 9;
		printf("%d\t%d\n", fahren, cels);
		fahren += step;
	}
}
