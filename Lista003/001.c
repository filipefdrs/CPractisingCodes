#include <stdio.h>

int main( void ) {
	int number = 0;
	int counter = 0;

	while(counter < 5) {
		if(number % 3 == 0) {
			printf("%d ", number);
			counter++;
		}
		number++;
	}
	printf("%s", "\n");

	return 0;
}