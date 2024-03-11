// This is just to show basic use of the header file.
// Do NOT include this in your submission for this assignment.

#include <stdio.h>
#include <stdlib.h>
#include "my_numbers.h"

int main()
{
	size_t size_my_numbers = sizeof my_numbers / sizeof my_numbers[0];

	printf( "The number of values in the array my_numbers is %u.\n", size_my_numbers );

	printf( "The value in location 4 is %d.\n", my_numbers[ 4 ] );

	return EXIT_SUCCESS;
}
