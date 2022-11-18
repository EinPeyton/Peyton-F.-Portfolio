#include <stdio.h>

int main() {
	int length, width, area;

	printf("Enter the rectangle length: ");
	scanf("%i", &length);

	if( length <= 0 )
	{
		printf("Lenth cannot be negative!\n");
		return 0;
	}

	printf("Enter the rectangle  width: ");
	scanf("%i", &width);

	if( width < 0 )
	{
		printf("Width cannot be negative!\n");
		return 0;
	}

	area = length * width;

	printf("The area of the rectangle is:  %i", x * y);
	return 0;
}
