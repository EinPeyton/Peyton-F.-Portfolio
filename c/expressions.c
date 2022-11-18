#include <stdio.h>	// Preprocessor directive

int main() {	
	int a, b;	// Declarations
	char c;

	a = 10;		// Assignment statements
	b = 20;

	scanf("%c", &c);
	
	if(a > b) {
		printf("a > b = %i\n", a > b);	// Output
	}
	if(c >= 65 && c <= 90 ) {
		c = c + 32;
	}
	printf("lower = %c\n", c);	// k
	return 0;	// Return value
}
