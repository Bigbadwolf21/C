#include <stdio.h>

/**
 * Calculate Area of a Circle
 * Ask user to input radius
 * C Practice
 */
int main()
{
	int radius;
	printf("Please enter radius here: ");
	scanf("%i", &radius);

	double area = 3.14159 * (radius * radius);
	printf("The area of a circle with %i radius is %f\n", radius, area);
	return 0;
}	
