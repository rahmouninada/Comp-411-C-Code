/* C Program to read an input number and print Collatz sequence for that number*/

#include <stdio.h>

int main() {

  int input;

  printf("Please enter the starting number of the Collatz sequence:\n");
  scanf("%d", &input);

  do {
	    printf("%d, ", input);
	    if (input % 2 == 0) {
		      input = input / 2;
	    } else {
		      input = (3 * input) + 1;
	    }
  } while (input > 1);
       printf("%d\n", input);
}
