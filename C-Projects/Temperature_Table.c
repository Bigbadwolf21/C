#include <stdio.h>
/**
 * Modify the temperature table
 * Print Fahrenheit-Celsius table
 * for fahren = 0, 10, ..., 212; floating-point version
 * More accurate output
 */
main()
{
	float fahren, cels;
	int lower, upper, step;

	lower = 0; /* lower limit of the temperature table */
	upper = 212; /* upper limit of the temperature table */
	step = 10; /* step size */

	fahren = lower; /* assign lower value to fahren */
	while (fahren <= upper) {
		cels = (5.0 / 9.0) * (fahren - 32.0);
		printf("Temperature Table Fahrenheit to Celsius\n %3.0f %6.1f\n", fahren, cels);
		fahren += step;
	}	
}
	
